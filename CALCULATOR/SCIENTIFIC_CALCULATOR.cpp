/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-10
 * @Description: Notes for CHP_3 Programming: Principles and Practice Using C++, Bjarne Stroustrup
 */


#include <cmath>
#include <vector>
#include <iostream>

const std::vector<char> invalidCharacters = {
    '`', '~', '!', '@', '#', '$', '_', '=', '{', '}', '[', ']',
    '\\', '|', ':', ';', '"', '\'', '<', '>', ',', '?'
};

//main methods
std::vector<std::string> tokenization(std::string userInput);


//helper functions
bool isDigit(char ch);
void printVector(std::vector<std::string>& v); //prints the expresion stored in the main vector
bool isOperation(char op);
bool isAdvancedOperation(std::string);
bool isFunction(std::string);//parse things such as cin, cos, tan, etc
bool isVariable(std::string);//parse variable such as 7xyz
bool isDouble(std::string);
bool validChars(std::string);

//custom tokoenizer methods
std::string parseDouble(std::string); //parses valid doubles in user input
std::string parseUnaryNeg(std::string); //parses valid unary mathematical expressions in userInput
std::string parseAdvancedOperation(std::string); //parses valid advanced mathematical operations
std::string parseFunction(std::string);//parses mathematical function such as cos, sin, tan, etc
std::string parseVariable(std::string);//parse variables such as 7xyz




int main(){

    std::vector<std::string> expression;

    while(true){
        std::string userInput = "";
        std::cout <<"Please enter an expression: ";

        try{

            expression = tokenization(userInput);
            std::cout << "Tokenization successful! \n";
            break;
        }catch(const std::runtime_error& e){
            std::cerr << "Tokenizer Error: " << e.what() << "\n";
        }

    }

    //evaluate code down below in this region

}


std::vector<std::string> tokenization(std::string userInput){
    std::string token = "";
    std::vector<std::string> v;
    if(!validChars(userInput)){
        throw std::runtime_error("Invalid characters in expresion");
    }
    
    while(userInput != ""){
        if(userInput.at(0) == '(' && userInput.at(1) == '-'){
            token = parseUnaryNeg(userInput);
        }else if(isVariable(userInput)){
            token = parseVariable(userInput);
        }else if(isDouble(userInput)){
            token = parseDouble(userInput);
        }else if(isAdvancedOperation(userInput)){
            token = parseAdvancedOperation(userInput);
        }else if(isOperation(userInput.at(0))){
            token = userInput.at(0);
        }else if(isFunction(userInput)){
            token = parseFunction(userInput);
        }else if(userInput.at(0) == ' '){
            token = userInput.at(0);
        }else{
            throw std::runtime_error("Invalid Expression");
            //TODO: fix to have a trace system for the expression for better feed back
        }
        if(token.at(0) != ' '){
            v.push_back(token);
        }
        userInput.erase(0,token.size());
        token = "";

    }
}

bool isDouble(std::string userInput){
    bool decimal = false;
    bool validInput = true;

    for(int i = 0; i < userInput.size(); i++){
        if(!(isDigit(userInput.at(i)))){//pull all digits
            validInput = false;
        }else if(userInput.at(i) == '.' && !(decimal)){//pull decimals until no longer valid
            decimal = true;
            validInput = true;
        }else if(userInput.at(0) == '.' && decimal){//end of valid double
            return false;
        }

    }
}


//
bool validChars(std::string userInput){
    for(int ch = 0; ch < invalidCharacters.size(); ch++){
        for(int i = 0; i < userInput.size(); i++){
            if(userInput.at(i) == ch){
                return false;
            }
        }
    }
    return true;
}

std::string parseDouble(std::string userInput){
    bool decimal = false;
    std::string newToken = "";

    for(int i = 0; i < userInput.size(); i++){
        if(isDigit(userInput.at(i))){//pull all digits
            newToken += userInput.at(i);
        }else if(userInput.at(i) == '.' && !(decimal)){//pull decimals until no longer valid
            decimal = true;
            newToken += userInput.at(i);
        }else{//end of valid double
            break;
        }
    }
    return newToken;
    
}



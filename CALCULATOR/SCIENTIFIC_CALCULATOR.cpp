/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-10
 * @Description: Notes for CHP_3 Programming: Principles and Practice Using C++, Bjarne Stroustrup
 */


#include <cmath>
#include <vector>
#include <iostream>
#include <regex>

const std::vector<char> invalidCharacters = {
    '`', '~', '!', '@', '#', '$', '_', '=', '{', '}', '[', ']',
    '\\', '|', ':', ';', '"', '\'', '<', '>', ',', '?'
};

const std::vector<char> validOperations = {
    '=', '+', '-', '/', '*', '(', ')', 
};

//main methods
/*DONE-READMEDONE*/ void validChars(std::string);
/*DONE-READMEDONE*/ std::vector<std::string> tokenization(std::string userInput);
bool validExpression(std::vector<std::string>& v);


//valid token checks
/*DONE*/ bool isDigit(char ch);
/*DONE*/ bool isOperation(char op);
/*TODO*/ bool isAdvancedOperation(std::string);
/*TODO*/ bool isFunction(std::string);//parse things such as cin, cos, tan, etc
/*TODO*/ bool isVariable(std::string);//parse variable such as 7xyz
/*DONE-READMEDONE*/ bool isDouble(std::string);
/*DONE*/ bool startOfUnaryNeg(std::string);
/*DONE*/ bool isUnaryPos(std::string);


//custom tokoenizer methods
/*DONE-READMEDONE**/ std::string parseDouble(std::string&); //parses valid doubles in user input
/*DONE*/std::string parseUnaryNeg(std::string&); //parses valid unary mathematical expressions in userInput
std::string parseAdvancedOperation(std::string); //parses valid advanced mathematical operations
std::string parseFunction(std::string);//parses mathematical function such as cos, sin, tan, etc
std::string parseVariable(std::string);//parse variables such as 7xyz

//helper functions
/*DONE*/ void printVector(std::vector<std::string>& v); //prints the expresion stored in the main vector


int main(){

    std::vector<std::string> expression;

    while(true){
        std::string userInput = "";
        std::cout <<"Please enter an expression: ";
        std::getline(std::cin, userInput);

        try{
            //tokenizes user expression stored as a string into individual elements in a vector
            expression = tokenization(userInput);
            std::cout << "Tokenization successful! \n";

            //validates vector-expression to ensure is a valid mathematical expression
            //validExpression(expression);
            std::cout << "Valid Expression\n";

            printVector(expression);

            break;
        }catch(const std::runtime_error& e){
            std::cerr << "Invalid mathematical expression: " << e.what() << "\n";
        }

    }

    //evaluate code down below in this region

}

std::vector<std::string> tokenization(std::string userInput){
    std::string token = "";
    std::vector<std::string> v;
    bool edgeCase = false;

    validChars(userInput);

    userInput = std::regex_replace(userInput, std::regex("\\s+"), "");//collapses all equation to no spaces

    //edge case where user submits +9 - 4, instead of (+9) - 2 
    //(idk wtf you would type either combo anyways)
    if(userInput.at(0) == '+')//first token is a + just simply to num
        userInput.erase(0,1);

    if(userInput.at(0) == '-'){//first token is a -
        token = parseUnaryNeg(userInput); //unary neg add in method
        edgeCase = true;
    }
    while(userInput != ""){
        if(startOfUnaryNeg(userInput)){//checks for (-num)
            v.push_back(std::string(1, userInput.at(0)));//adds '(' as its own token
            //erase '(' so its not parsed as a token with the negative number into the vector
            userInput.erase(0,1);
            //parse negative number
            token = parseUnaryNeg(userInput);
        }else if(isUnaryPos(userInput)){//special case to simplify "(+num)" to just (num)
            userInput.erase(1, 1);
        }else if(isVariable(userInput)){//checks for math variables such as 7xyz and PI
            token = parseVariable(userInput);
        }else if(isDouble(userInput)){//checks for a valid double token
            token = parseDouble(userInput);
        }else if(isAdvancedOperation(userInput)){//checks for advanced opertors such as <<, >> &, =, %, 
            token = parseAdvancedOperation(userInput);
        }else if(isOperation(userInput.at(0)) && !edgeCase){//Checks for simple math operations (/,*,+,-, =)
            token = userInput.at(0);
        }else if(isFunction(userInput)){//checks for valid math operations such as sin,cos,tan, <<, etc
            token = parseFunction(userInput);
        }else{
            throw std::runtime_error("Invalid Expression");
            //TODO: fix to have a trace system for the expression for better feed back
        }
        std::cout << token << "\n";

        v.push_back(token);
        userInput.erase(0,token.size());
        token = "";
        edgeCase = false;

    }
    return v;
}


//+-----------------------------------------+
//VALID INPUT CHECKS
//+-----------------------------------------+



//checks for invalid characters input
void validChars(std::string userInput){
    for(int ch = 0; ch < invalidCharacters.size(); ch++){
        for(int i = 0; i < userInput.size(); i++){
            if(userInput.at(i) == ch){
                throw std::runtime_error("Invalid characters input!\n");
                
            }
        }
    }
}

//is the next token a valid double
bool isDouble(std::string userInput){
    bool decimal = false;

    if(userInput.at(0) == '.' && userInput.size() < 2) // invalid input such as '.'
        return false;

    if(!isDigit(userInput.at(0)) && userInput.at(0) != '.')//first letter is not a digit or a dot return false
        return false;

    if(userInput.at(0) == '.' && !isDigit(userInput.at(1))) //a decimal followed by anything but a digit is denied
        return false;

    for(int i = 0; i < userInput.size(); i++){
        if(userInput.at(i) == '.' && decimal)//if a second decimal is detected return false
            return false;
        if(userInput.at(i) == '.')//track first decimal once detected
            decimal = true;

        if(i != 0 && (!isDigit(userInput.at(i)) && userInput.at(i) != '.'))//break once something else is detected
            break;
        
    }

    return true;
}

//is the next char being checked an integer
bool isDigit(char ch){
    if(ch >= '0' && ch <= '9'){
        return true;
    }
    return false;
}

//safe guard for out of bouds check for unary negatives
bool startOfUnaryNeg(std::string userInput){
    if(userInput.size() < 2)
        return false;
    if(userInput.at(0) == '(' && userInput.at(1) == '-')
        return true;
    return false;
}

//safe gaurd for checking unary postives surrounded by parenthesis(IDK why you would input (+80) anyways)
bool isUnaryPos(std::string userInput){
    if(userInput.size() < 2)//cant be unary postive if string only has 2 char left
        return false;
    //double check for "(+" at start of string followed by valid double
    return userInput.at(0) == '(' && userInput.at(1) == '+' && isDouble(userInput.substr(2));
}

//checks to see if given characters represents a valid mathematical operation
bool isOperation(char op){
    for(char ch : validOperations){
        if(ch == op)
            return true;
    }
    return false;
}




/*TODO*/ bool isAdvancedOperation(std::string){
    return false;
}

/*TODO*/ bool isFunction(std::string){//parse things such as cin, cos, tan, etc
    return false;
}

/*TODO*/ bool isVariable(std::string){//parse variable such as 7xyz
    return false;
}

//+------------------------------------------+
//PARSING FUNCTIONS
//+------------------------------------------+


//chops a valid double token off the front of the userInput string.
std::string parseDouble(std::string& userInput){
    bool decimal = false;
    std::string newToken = "";

    for(int i = 0; i < userInput.size(); i++){
        if(isDigit(userInput.at(i)) || userInput.at(i) == '.'){//pull all digits
            newToken += userInput.at(i);
        }/*else if((userInput.at(i) >= 'a' && userInput.at(i) <= 'z') || (userInput.at(i) >= 'A' && userInput.at(i) <= 'Z')){
            userInput = "*" + userInput; 
            break;

            //Needs to be fixed, User input still contains the double at this point and will throw a
            //operation in fron of it instead of on the back of the double
        }*/else{
            break;
        }
        
    }
    return newToken;
    
}

//chops off valid unary negative vars, nums, etc
std::string parseUnaryNeg(std::string& userInput){
    std::string token = "";
    userInput.erase(0,1);//erases '-' and adds it back after userInput is tokenized

    if(isVariable(userInput)){//checks for math variables such as 7xyz
        token = "-" + parseVariable(userInput);
    }else if(isDouble(userInput)){//checks for a valid double token
        token = "-" + parseDouble(userInput);
    }else if(isAdvancedOperation(userInput)){//checks for advanced opertors such as <<, >> &, =, %, 
        token = "-" + parseAdvancedOperation(userInput);
    }else if(isFunction(userInput)){//checks for valid math operations such as sin,cos,tan, <<, etc
        token = "-" + parseFunction(userInput);
    }
    userInput = '-' + userInput;
    return token;
    
}






//not done
/*TODO*/std::string parseAdvancedOperation(std::string){ //parses valid advanced mathematical operations
    return "";
}

/*TODO*/std::string parseFunction(std::string){//parses mathematical function such as cos, sin, tan, etc
    return "";
}

/*TODO*/std::string parseVariable(std::string){
    return "";
}

//+------------------------------------------+
//Other helper functions
//+------------------------------------------+

//print the vector to show the expression being evaulated or tokenized
void printVector(std::vector<std::string>& v){
    for(std::string str : v){
        std::cout << str << " ";
    }
}

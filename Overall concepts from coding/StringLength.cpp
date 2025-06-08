#include <iostream>
//terminal formatting. Uneccessary

void printLine(){
    std::cout << "+-----------------------+\n\n";
}


//method that checks to see if string contains the safe letter "}", which will stop the program
bool contains(std::string words){
    std::cout << "Inside method.";
    //part 1: for every letter in words
    for(int position = 0; position < words.length(); position++){
        std::cout << "Inside the for loop.";

        //part 2: check to see if it contain "}"
        if(words.at(position) == '}'){
            std::cout << "We found a break out";
            return true;
        }
    }
    return false;
}

int main(){
    std::string character_set = "";
    char letter = 'a'; 
    int total = 0; 

    std::cout << "What is the string you would like us to count?\n";
    
    //continue taking input until input contains "}"
    do{
        character_set =  character_set + "\n" + std::getline(std::cin, character_set);

    }while(contains(character_set));

    //i is set to 1 instead of 0 so count appears properly
    //either way i would have either had to do + or - 1
    for(int i = 1; i <= character_set.length(); i = i){

        //is it equal to a space if so dont count it in the total
        if(character_set.at(i - 1) == ' '){
            //tracks the total letters in the name while simulatously printing
            //the length of the string to ensure accuracy
            std::cout << "_ " << i << " = i, " << total << " = total\n";
           
            //making sure i am actually in the if statement
            //catching the spaces LOL not neccessary now just fun
            std::cout << "SPACE DETECTED!!!!\n";
            printLine();
        }else if(character_set.at(i - 1) != ' '){   
            total++;
                    
            //for clarity in the terminal to see which letter is being counted
            std::cout << character_set.at(i - 1) << " ";
        
            std::cout << i << " = i, " << total << " = total\n";
            
        }
        i++;
    }

    std::cout << "There are ";
    std::cout << total << " letters in the string you submitted!";

    return 0;
}


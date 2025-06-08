//@author JLG_DEVELOPMENT
//05-JUN-2025
//

#include <iostream>

const int P1_SCALE = 10;
const int P2_SCALE = 10;

void project1();
void project2();
void project3();
void project4();
void project5();
void line();


void line(){
    std::cout << "+";
    for(int dash = 0; dash < P2_SCALE - 2; dash++){
        std::cout << "-";
    }
    std::cout << "+\n";
}

int main(){
    project1();
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    project2();
}

void project1(){
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n";

    for(int levels = 1; levels <= P1_SCALE; levels++){

        //left star triangle
        for(int leftStars = 0; leftStars < P1_SCALE - levels; leftStars++){
            std::cout << "*";
        }
        
        //left spacing
        for(int spaces = levels - 1; spaces > 0; spaces--){    
        //this one was tricky as previously i just ran the outside loop backwards. I realized it will 
        //print the outer loop variable value - 1 and ran with running that loop backwards.
            std::cout << " ";
        }

        
        for(int fowardSlash = 0; fowardSlash < (P1_SCALE * 2) - (levels * 2); fowardSlash++){
        //foward slashes
        //same as left star triangle equation, just print twice as many.
            std::cout << "/";
        }

       
        for(int spaces = (levels * 2) - 2; spaces > 0; spaces--){
        //backward slash
        //a little tricker. Same idea i want twixe as many backslashes so we do levels * 2 when setting the loop variable value
        //Difference here is we still want to skip the first iteration and it must be compensated since were doubling everything 
        //to now subtract by two instead of 1. What you do to one side, you must do to the other (basic algebra).
            std::cout << "\\";
        }

        //right side spaces.
        for(int spaces = levels - 1; spaces > 0; spaces--){
            std::cout << " ";
        }

        //right star triangle
        for(int leftStars = 0; leftStars < P1_SCALE - levels; leftStars++){
            std::cout << "*";
        }

        std::cout << "\n";
    }
}

/*
void project2(){
    line();

    for(int twice = 0; twice < 2; twice++){
        for(int level = 0; level < (P2_SCALE / 2); level++){
            std::cout << "|";

            for(int space = 0; space < ((P2_SCALE / 2) - level) - 1; space++){
                std::cout << "S";
            }

            if(level != 0){
                std::cout << "^";
            }

            for(int space = P2_SCALE - level; space < P2_SCALE; space++){
                std::cout << " ";
            }

            if(level != 0){
                std::cout << "^";
            }

            for(int space = 0; space < ((P2_SCALE / 2) - level) - 1; space++){
                std::cout << "S";
            }
            std::cout<< "|\n";

        }
    }


}
*\

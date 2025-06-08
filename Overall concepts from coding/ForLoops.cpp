//@author JLG_DEVELOPMENT
//(levels * i) -1 is and equation being used through this program to print a pyramid pattern in multiple prompts

//numPyramid if statement is fucked up with operand &&. it always throws exceptiong
#include <iostream>

const int BOX_SCALE = 10;
const int TRIANGLE_SCALE = 10;
const int RIGHT_TRIANGLE_SCALE = 10;
const int PYRAMID_SCALE = 30;
const int NUM_PYRAMID_SCALE = 9;//do not set past 9. numPyramid not set to handle double digit numbers
const int WAVE_SCALE = 30;
const int PASCAL_SCALE = 9;//do not set past 9

void triangle();
void lidsOfBox();
void box();
void rightTriangle();
void properPyramid();
void upsideDownPyramid();
void diamond();
void numPyramid();
void wavePattern();
void pascalTriangle();

int main(){

    
    box();
    triangle();
    rightTriangle();
    properPyramid();
    upsideDownPyramid();
    diamond();
    numPyramid();
    wavePattern();
    pascalTriangle();
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";

}

void triangle(){
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    for(int i = 0; i < TRIANGLE_SCALE; i++){
        for(int j = 0; j < TRIANGLE_SCALE - i; j++){
            std::cout << " ";
        }
        std::cout << "/";

        for(int j = 0; j < i*2; j++){
            std::cout << '.';
        }

        std::cout << "\\\n";
    }
}

void lidsOfBox(){
    std::cout << "+";
    for(int i = 1; i <= BOX_SCALE - 2; i++){
        std::cout << "-";
    }
    std::cout << "+\n";
}

void box(){
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    lidsOfBox();
    for(int i = 1; i <= (BOX_SCALE/2)  - 2; i++){
        std::cout << "+";
        
        for(int j = 1; j <= BOX_SCALE - 2; j++){
            std::cout << 'c';
        }
        std::cout << "+\n";
    }
    lidsOfBox();
}

void rightTriangle(){
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    //first for loop prints the x axis of the triangle
    for(int i = 1; i <= RIGHT_TRIANGLE_SCALE; i++){
        //second for loop prints each layer
        //each layers number of askertask is fairly simple, make each layer print up to int i
        //askertasks. As i continues to increment by one, the number of askertask will increase by 1
        //thus giving us a right triangle 
        for(int j = 0; j < i; j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void properPyramid(){
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    for(int levels = 0; levels < PYRAMID_SCALE; levels++){
        for(int spaces = 0; spaces < (PYRAMID_SCALE - 1) - levels; spaces++){
            std::cout << " ";
        }
        for(int stars = 0; stars < (levels * 2)- 1; stars++){
            std::cout << "*";
        } 
        std::cout << "\n";
    }
}

void upsideDownPyramid(){
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    for(int levels = PYRAMID_SCALE; levels > 0; levels--){
        for(int spaces = 0; spaces < PYRAMID_SCALE - levels; spaces++){
            std::cout << " ";
        }
        for(int stars = 0; stars < (levels * 2) - 1; stars++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void diamond(){
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    //top half of diamond
    for(int levels = 0; levels < PYRAMID_SCALE; levels++){
        for(int spaces = 0; spaces < (PYRAMID_SCALE - 1) - levels; spaces++){
            std::cout << " ";
        }
        for(int stars = 0; stars < ((levels + 1) * 2) - 1; stars++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    //bottom half of pyramid
    //starts at - 1 to eliminate the duplicate floor effect thus creating a median floor
    for(int levels = PYRAMID_SCALE - 1; levels > 0; levels--){
        for(int spaces = 0; spaces < PYRAMID_SCALE - levels; spaces++){
            std::cout << " ";
        }
        for(int stars = 0; stars < (levels * 2) - 1; stars++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void numPyramid(){
   std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    for(int levels = 1; levels <= NUM_PYRAMID_SCALE; levels++){//levels of the pyramid determined by a constant
        //prints the spaces of the pyramid out at the scale of the pyramid - levels
        //levels is incrementing each iteration of the for loop.
        //by setting spaces at 1 we then get a decscending space pattern start at - 1 of pyramid scale
        //thus spacing the pyamid properly.
        for(int spaces = 1; spaces <= NUM_PYRAMID_SCALE - levels; spaces++){
            std::cout << " ";
        }
        //prints the ascending numbers one each level 
        for(int nums = 1; nums <= levels; nums++){
            std::cout << nums;
        }
        //prints the descending numbers on each level
        for(int nums = levels - 1; nums > 0; nums--){
            std::cout << nums;
        }
        std::cout << "\n";
    }
}

void wavePattern(){
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";

     for(int levels = WAVE_SCALE; levels > 0; levels--){
        for(int spaces = 0; spaces < WAVE_SCALE - levels; spaces++){
            std::cout << " ";
        }

        std::cout << "*";

        //- 1 - 2 instead of - 3 to not only show for the off by one error but also the 
        //compensation of the two stars 1 before and 1 after the for loop
        for(int stars = 0; stars < (levels * 2) - 1 - 2; stars++){
            std::cout << " ";
        }
        if(levels != 1){
         std::cout << "*";
        }

        std::cout << "\n";
    }
    for(int levels = 1; levels <= WAVE_SCALE; levels++){
        for(int spaces = 0; spaces < (WAVE_SCALE - 1) - (levels - 1); spaces++){
            std::cout << " ";
        }
        std::cout << "*";
        for(int stars = 0; stars < (levels * 2)- 1 - 2; stars++){
            std::cout << " ";
        } 
        
        if(levels != 1){
         std::cout << "*";
        }
        std::cout << "\n";
    }
}

void pascalTriangle(){
    int number = 1;
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";

    for(int levels = 1; levels <= PASCAL_SCALE; levels++){

        for(int spaces = 0; spaces <= (PASCAL_SCALE - 1) -levels; spaces++){
            std::cout << " ";
        }

        std::cout << "1";

        //prints the numbers in the center of the triangle.
        //each level i want to print level * 2 - 1 digits
        //the outer two needs to be ones thus -2 printed digits.
        for(int nums = 0; nums < (levels * 2) - 1 - 2; nums++){
            std::cout << number;
        }

        number++;//controls the numbers in the pascal triangle and increments each layer by 1

        if(levels != 1){ //does not print a second 1 on the first line
            std::cout << "1";
        }
        std::cout << "\n";
    }
}
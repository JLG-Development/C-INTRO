/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-10
 * @Description: Exercises for CHP_3 Programming: Principles and Practice Using C++, Bjarne Stroustrup
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void exercise2();
void exercise3();
void exercise4();
void exercise5();
void exercise9();
void exercise10();

//input validators
bool validInput5(std::string);
void readInData(std::vector<double>& v);

//math shit for advanced data structures.
void sortVector(std::vector<double>& v);
double avgOfDataStructure(std::vector<double>& v);
double totalDataStructure(std::vector<double>& v);
bool isDouble(std::string input);
bool isDigit(char ch);

//helper function exercise 9
int countSquares(long long grains);

int main(){
    //exercise2();
    //exercise3();
    //exercise4();
    //exercise5();
    //exercise9();
    exercise10();

}


void exercise2(){
    std::string input = "";
    std::cout << "Please enter a valid string literal!!!\n";
    std::cin >> input;

    for(int i = 0; i < input.size(); i ++){
        //input.at(i) - 0 to force print input.at(i) as an integer
        std::cout << "'" << input.at(i) << "' ASKII ------> " << input.at(i) - 0 << "\n";
    }


}

void exercise3(){
    double median = 0.0;
    double temp = 0.0;

    std::vector<double> v = {
    9, 444, 481, 30, 685, 43, 427, 919, 225, 564, 242, 747, 700, 724, 561, 302, 522, 57, 162, 955,
    673, 581, 29, 843, 107, 516, 185, 171, 47, 176, 265, 817, 890, 333, 140, 584, 860, 24, 278, 2,
    751, 229, 935, 414, 622, 435, 580, 186, 850, 505, 112, 810, 193, 53, 973, 248, 968, 405, 319, 718,
    530, 593, 559, 393, 682, 473, 52, 872, 99, 349, 74, 109, 252, 861, 442, 17, 108, 805, 814, 369,
    203, 428, 257, 492, 594, 313, 110, 986, 337, 931, 732, 124, 725, 526, 750, 255, 499, 938, 884, 411,
    46, 599, 707, 51, 253, 464, 490, 557, 50, 439, 436, 672, 323, 757, 340, 421, 1000, 887, 172, 834,
    944, 121, 839, 73, 77, 803, 566, 113, 537, 119, 123, 728, 847, 996, 710, 667, 689, 825, 926, 629,
    780, 679, 807, 907, 21, 237, 942, 183, 16, 158, 5, 525, 479, 571, 197, 624, 482, 496, 529, 512,
    135, 468, 343, 532, 945, 383, 628, 317, 289, 980, 838, 105, 375, 576, 992, 538, 470, 767, 494, 275,
    705, 908, 249, 717, 161, 864, 300, 201, 434, 94, 306, 558, 792, 914, 459, 502, 311, 36, 446, 45,
    188, 413, 781, 165, 948, 1, 296, 131, 347, 958, 680, 774, 819, 821, 71, 472, 625, 429, 567, 227,
    370, 469, 528, 200, 209, 777, 125, 788, 471, 417, 406, 670, 795, 408, 234, 939, 995, 696, 218, 999,
    655, 577, 426, 366, 683, 298, 828, 392, 677, 595, 634, 765, 102, 932, 998, 905, 345, 974, 371, 739,
    662, 549, 463, 844, 818, 686, 531, 35, 731, 664, 915, 965, 704, 48, 641, 506, 618, 742, 878, 235,
    401, 880, 26, 822, 407, 487, 11, 702, 623, 174, 91, 755, 261, 159, 635, 918, 621, 387, 56, 633,
    432, 997, 491, 895, 467, 536, 142, 676, 936, 328, 456, 598, 31, 690, 712, 76, 80, 555, 251, 431,
    274, 325, 650, 886, 693, 909, 585, 285, 33, 486, 293, 66, 133, 49, 654, 708, 645, 129, 143, 149,
    715, 182, 65, 132, 404, 738, 81, 346, 452, 785, 151, 649, 975, 609, 967, 868, 69, 184, 187, 870,
    440, 215, 813, 282, 811, 395, 631, 245, 830, 989, 497, 871, 368, 415, 892, 706, 269, 902, 189, 454,
    692, 541, 144, 952, 778, 98, 455, 590, 367, 994, 173, 334, 236, 364, 972, 535, 280, 727, 79, 610};
    sortVector(v);

    //std::cout << v.size() << "\n";

    std::cout << "The Final vector: \n";
    for(double num : v){
        std::cout << num << ", ";
    }
    std::cout << "\n";

   if(v.size() % 2 == 0){
        //std::cout << "IM WORKING\n";
        //take the two middle elements, add them together and dvide by 2
        //pull the middle element by taking size dividing by two and pull one to the right as well
        median = (v[v.size() / 2 - 1] + v[(v.size()/2)]) / 2;
    }else if(v.size() % 2 != 0){
        //std::cout << "IM NOT WORKING\n";
        //just pull middle element
        median = v[(v.size() / 2) + 1];
    }
    std::cout << "Median is " << median << ".\n"; 
}

void exercise4(){
    std::vector<double> v;
    double avg = 0.0;
    double total = 0.0;

    readInData(v);
    sortVector(v);
    avg = avgOfDataStructure(v);
    total = totalDataStructure(v);
    std::cout << "Smallest distance ---> " << v[0] << " miles\n";
    std::cout << "Largest distance  ---> " << v[v.size() - 1] << " miles\n";//-1 because index starts at 01

    std::cout << "Average distance  ---> " << avg << " miles\n";
    std::cout << "Total distance    ---> " << total << " miles\n";

}

void exercise5(){
    int guessIncrement = 25;
    int answer = 81;
    int guess = 50;
    std::string input = "";

    std::cout << "Please input a number between 1 - 100\n";
    std::cin >> answer;

    if(!(answer > 0) && !(answer <= 100)){
        std::cout << "Invalid input!\n";
        return;
    }
    
    std::cout << "Computer guesses " << guess << "!\n";

    while(guess != answer){
        if(guess!= 50){
            std::cout << "Computer guesses " << guess << "!\n";
        }

        std::cout << "Is the number \"smaller\" or \"larger\" than you number?\n";
        std::cin >> input;

        if(input == "smaller"){
            guess -= guessIncrement;
            guessIncrement /= 2;
        }else if(input == "larger"){
            guess += guessIncrement;
            guessIncrement /= 2;
        }else{
            std::cout << "!!Invalid input!!\n";
        }
    
    }

    std::cout << "Computer guess the number " << answer << "!!\n";

}

void exercise9(){
    long long targetGrains = 1000000;
    
    std::cout << countSquares(targetGrains) + 1 << " squares to hit " << targetGrains << " grains!\n";
    std::cout << "1 * 2 ^ x == " << 1 * pow(2, countSquares(targetGrains)); 
}

void exercise10(){
    //63 and not 64, first square is 1 * 2 not 2 squared
    unsigned long long grains = 1 * pow(2 , 63);//63 and not 64, first square is 1 * 2 not 2 squared
    std::cout << "Old man wanted " << grains << " grains of rice. WTF\n";
}

//Exercise 3 and 4 helper functions
//+-------------------------------------------------------+

//helper exercise4();
void readInData(std::vector<double>& v){
    std::string data = "";
    std::cout << "Please input valid doubles or \"DONE\"\n";

    while(std::cin >> data){
        if(data == "DONE")//exit strat to stop reading input
            break;
        if(isDouble(data)){//valid input checker
            v.push_back(std::stod(data));
        }else{//user tries to break my program handler
            std::cout << "!*!*!*!*!Invalid input!*!*!*!*!\n\n";
        }
        if(data != "")//fence posting for prompt
        std::cout << "Please input valid doubles or \"DONE\"\n";
    }
}
//helper exercise4();
bool isDouble(std::string input){
    bool decimal = false;
    for(int i = 0; i < input.size(); i++){
        //if the char a digit or a decimal
        if(!isDigit(input.at(i)) && input.at(i) != '.')
            return false;

        if(input.at(i) == '.' && !decimal){//tracks if a decimal has been seen
            if(decimal == true){
                return false;
            }
            decimal = true;
        }

    }
    return true;
}
//helper exercise4();
bool isDigit(char ch){
    return ch >= 48 && ch <= 57;
}
//helper exercise4();
double totalDataStructure(std::vector<double>& v){
    double total = 0.0;

    for(double num : v){
        total += num;
    }

    return total;
}
//helper exercise4();
double avgOfDataStructure(std::vector<double>& v){
    double avg = 0.0;
    for(double num: v){
        avg += num;
    }
    return avg / v.size();
}
//custom sort method for data structures 
void sortVector(std::vector<double>& v){
    if(v.size() < 2)
        return;

        double num1 = 0.0; double temp = 0.0;
        for(int i = 0; i < v.size(); i++){
            num1 = v[0];
            v.erase(v.begin() + 0);
            for(int j = 0; j < v.size() - i; j++){
                //keep advancing numbers forward in the vector as needed
                if(num1 < v[j] && j != (v.size() - i) - 1){
                    temp = v[j];
                    v[j] = num1;
                    num1 = temp;
                }
                //first round pass edge case, largest num on end of vector
                if(i == 0 && j == (v.size() - i) - 1){
                    //if 1 less than largest value, put to left of largest
                    //edge case where largest value is already in place on first pass
                    //place value to left. Done run this the original size is 2 or less
                    //to avoid access out of bounds
                   if(num1 < v[v.size() -1] && v.size() >= 2){
                        v.insert(v.begin() + (j - 1), num1);
                        break;
                    }else{//every other case place largest on the end
                        v.push_back(num1);
                        break;
                    }

                }
                //every other case, so as swap on end of inner loop iteration.
                //two equal numbers, and last but not least num1 > v[j] needs to be inserted on the right
                if( i != 0 && j == (v.size() - i) -1){
                    if(num1 <= v[j]){
                        v.insert(v.begin() + j, num1);
                    }else if(num1 > v[j]){
                        v.insert(v.begin() + (j + 1), num1);
                    }
                    break;
                }
            }
            //last two elements come out unsorted do to the relationsship of index and v.size()
            if(i >= v.size() - 1){
                v.insert(v.begin() + 0, num1);
                if(v[0] > v[1]){
                    temp = v[1];
                    v[1] = v[0];
                    v[0] = temp;
                }
            }
            /*std::cout << "\n";
            for(double num:v){
                std::cout << num << ", ";
            }
            std::cout << "\n";*/
        }
    
}


//Exercise 9 helper functions
//+-------------------------------------+

//total grains is = to 1 doubled square times
//goal is to find how many squares before you hit the targetGrains
int countSquares(long long targetGrains){
    long long grains = 1;
    int squares = 0;

    //starts at 0 and not one because first square is supposed to be 1 * 2, not 2 ^ 2
    for(squares = 0; 1 * pow(2, squares) < targetGrains; squares++);
    
    return squares;
}






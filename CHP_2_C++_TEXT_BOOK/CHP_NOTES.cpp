#include <iostream>

//imagine the object is an int type of object called age
//and is used to store a value of age
void chp_2();
void nameAndAgeExample();

int main(){
    /*std::cout << "Please enter your first name (follow by \"enter\"):\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Hello, " << first_name << "!\n";
    std::cout << "first_name is "<< first_name;*/
   // chp_2();
    nameAndAgeExample();
}

void chp_2(){
     std::cout << "Please enter your first name followed by your age! (Followed by \"enter\"):\n";
    std::string first_name = "???";
    int age;
    std::cin >> first_name >> age;
    std::cout << "Hello, " << first_name << "!\n";
    std::cout << "Congrats on reaching age " << age << "!\n";
    std::cout << "first_name is "<< first_name;
}

void nameAndAgeExample(){
    double age = 0;
    int ageMonths = 0;
    std::string first_name;
    std::string last_name;

    std::cout << "Please input first name, last name, and your age (followed by \"enter\"):\n";
    std::cin >> first_name >> last_name >> age;

    ageMonths = age * 12; 

    //this program needs to be modified to take the digit from age tenths place, divide
    //10 by this digit, and take the remainding percentage and divde twelve by that to get
    //an accurate numerical value of months.
    //additionally, after this is done, we must then round that number to the nearest whole 
    //number of months.
    std::cout << "HeLlO, " << first_name << " " << last_name << "!\n";
    std::cout << "Your age in months is " << ageMonths << "!\n";

    

}

#include <iostream>
#include <string>

int main(){
    std::cout << "HeLlO wOrLd\n" << "Get rick rolled bitch!!\n";
    //integer is used to store a value
    int x = 100000;
    int y = 6;
    int sum = x + y;

    std::cout << x << " \n" << sum << " \n" << x << " \n";


    int age = 21; 
    int year = 2025;
    int day = 02;

    //strings used to store a set of characters
    std::string month = "JUN";

    std::cout << "I am ";
    std::cout << age;
    std::cout << " years old! The date is ";
    std::cout << day;
    std::cout <<  "-";
    std::cout <<  month;
    std::cout <<  "-";
    std::cout << year;
    std::cout <<  ".";

    //double used to store decimals
    double pie = 3.14159265;
    std::cout << "\n";
    std::cout << pie;

    //boolean is used to store either a true or false value.
    //Which can be represented by either a 1 or a 0

    bool tof = 0;//example of setting a bool value by using 0
    bool power = true;//power is on
    std::cout << "\n"; 
    std::cout << power;
    std::cout << "\n";
    std::cout << tof;


    return 0;
}
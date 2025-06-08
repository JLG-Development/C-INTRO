#include <iostream> 
#include <string>

int main(){
    std::cout << "HeLlO wOrLd";

    const double pi = 3.14159;
    const int LIGHT_SPEED = 299792458;
    //if you know the value of a variabel is set in stone
    //and never going to change use the const
    //and make the variable name all caps.
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << " \n" << circumference << "centimetes.";
    //The const key word specifies that a variables value is constant.
    //Tells the compiler that the variables value cant be modified


    //A good example for a constant variable is ounce in a cup
    //Number of ten ups of ten ups
    const double OUNCES_IN_A_CUP = 8; 
    const double TEN_UPS = 10; 
    const double TOTAL_CROSSOVERS = 10;

}
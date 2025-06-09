#include <iostream>

//imagine the object is an int type of object called age
//and is used to store a value of age
void chp_2();

int main(){
    /*std::cout << "Please enter your first name (follow by \"enter\"):\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Hello, " << first_name << "!\n";
    std::cout << "first_name is "<< first_name;*/
    chp_2();
}

void chp_2(){
     std::cout << "Please enter your first name (follow by \"enter\"), followed by your age (follow by \"enter\"):\n";
    std::string first_name;
    int age = 0;
    std::cin >> first_name >> age;
    std::cout << "Hello, " << first_name << "!\n";
    std::cout << "Congrats on reaching age " << age << "!\n";
    std::cout << "first_name is "<< first_name;
}

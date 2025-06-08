#include <iostream> 


int main(){
    std::string lastName = "";
    std::string firstName = "";
    char middleInitial = 'a';
    int age = 0;
        std::cout << "Please input your last name: ";
        std::cin >> lastName;

        std::cout << "\nPlease input first name: ";
        std::cin >> firstName; 
        
        std::cout << "\nPlease input middle intial: ";
        std::cin >> middleInitial; 

        std::cout << "\nWhat is your age: ";
        std::cin >> age;

        std::cout << "\n\nYour name is " << firstName << " " << lastName << " " << middleInitial << ".\n";
        std::cout << "Your age is " << age << "! Congrats!";
}
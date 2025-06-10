//@author JLG_DEVELOPMENT
//@date 2025-06-08



#include <iostream>
#include <cmath>

void drill_1();

int main(){
    drill_1();
}


void drill_1(){
    std::cout << "Enter the first and last name of the person you wish to write too: ";
    std::string first_name = "???";
    std::string last_name = "???";
    std::string friend_name = "???";
    int age = 0;

    std::cin >> first_name >> last_name;
    std::cout << "Please enter the name of a friend: ";
    std::cin >> friend_name;

    std::cout << "Please enter the age of the reciepient: ";
    std::cin >> age; 
        if(age > 110 || age < 0)
            throw std::runtime_error("No shot your friend is that age cuz!");

    std::cout << "\n\n\n\n\n\n";
    std::cout << "Dear " << first_name << " " << last_name << ",\n"
              << "We have been worried sick about your mental state.\n"
              << "You need to stop being a bitch and embrace the suck.\n"
              << "Find a way to succeed that no one else can.\n"
              << "If you can do this you will be unstoppable.\n"
              << "Theres only some many hints that land lord is going to give you.\n"
              << "Surrender to him and he will guide you.\n"
              << "Have you talked to " << friend_name << " lately? He is very sick and would love a call.\n\n\n"
              << "P.S. Happy birthday! Congrats on " << age << " revolutions around the sun!\n";

    if(age < 12)
        std::cout << "Next year you will be " << age + 1 << "!\n";
    else if(age == 17)
        std::cout << "Next year you will be able to vote!\n";
    else if(age > 70)
        std::cout << "Are you retired yet????????\n";

    std::cout << "\n\n\n\n";
    std::cout << "Love - The Landlord\n";
}
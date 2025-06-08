#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist;
//typedef std::string text_t;
//typedef int num_t;
using text_t = std::string;
using num_t = int;

int main(){
    std::cout << "HeLlO wOrLd\n";
    text_t firstName = "Giordano";
    num_t age = 21;
    //typedef is an additional identifier
    //for and exsisting tpe
    //good for readability and reduces typos
    std::cout << "MY name is " << firstName;
    std::cout << "\nMy age is " << age;

}
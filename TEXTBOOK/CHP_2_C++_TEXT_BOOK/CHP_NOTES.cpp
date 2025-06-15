#include <iostream>
#include <cmath>

//imagine the object is an int type of object called age
//and is used to store a value of age
void chp_2();
void nameAndAgeExample();
void operandPractice();
void repeat();
void narrowing();

int main(){
    /*std::cout << "Please enter your first name (follow by \"enter\"):\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Hello, " << first_name << "!\n";
    std::cout << "first_name is "<< first_name;*/
   // chp_2();
    //nameAndAgeExample();
    //operandPractice();
    //repeat();
    narrowing();
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

void operandPractice(){
    double n = 0.0;
    std::cout << "Please enter a floating point number: ";
    std::cin >> n;

    std::cout << "n == " << n
              << "\nn+1 == " << n + 1
              << "\nthree times n == " << 3*n
              << "\ntwice n == " << n * 2
              << "\nn squared == " << n*n
              << "\nhalf of n == " << n/2
              << "\nSquare root of n == " << sqrt(n);

    int num;
    std::cout << "Please enter a valid integer: ";
    std::cin >> num;

    std::cout << "\nnum == " << num
              << "\nnum + 1 == " << num + 1
              << "\nTwice num == " << num * 2
              << "\nThrice num == " << num *3
              << "\nNum to rounded down to tens place == " << num - (num%10);
}

void repeat(){
    std::string previous;
    std::string current;
    int num_of_words = 0;

    while(std::cin >> current){
        num_of_words++;
        if(current == previous){
            std::cout << "Repeated word: " << current << "\n";
            std::cout << "Word number: " << num_of_words << "\n\n";
        }
        previous = current;
    }
}

void narrowing(){
    double x = 0.0;
    int i = 0;
    char ch = 0;

    while(std::cin >> x){
        i = x;
        ch = i;

        std::cout << "x == " << x
                  << "\ni == " << i
                  << "\nchar(" << ch << ")\n";
    }
}
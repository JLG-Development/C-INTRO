/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-10
 * @Description:
 */

#include <iostream>
#include <vector>
#include <string>

    void tryThis1();
    void tryThis2();
    void tryThis3();
    void tryThis4();
    void tryThis5();
    std::string bleepWord(std::string input);

    void curConvOutput(double numOfCurrency, double rate, std::string currency1, std::string currency2, bool tick);
    int square(int num);

int main(){
    //tryThis1();
    //tryThis2();
    //tryThis3();
    //tryThis4();
    tryThis5();
}

//mock conversion table from non interchangable currency conversions
void tryThis1(){
    constexpr double JPY2NOK = 0.06979;//Rate Yen to Kroner
    constexpr double GBP2USD = 1.35312;//Rate Pounds to Dollars
    constexpr double CHF2MXN = 23.16;//Rate Swiss Franks to Mexican Peso
    double numOfCurrency = 0.0;
    char typeCurrency = ' ';

    std::cout << "Please enter the number of currency in floating-point form. Then type the first letter of the "
              << "currency you are converting from. Offered conversion rates are yen(JPY) to kroner(NOK) "
              << "(uppercase J or N), "
              << "pounds(GBP) to dollar(USD) (uppercase G or U), and swiss franks(CHF) to peso(MXN) "
              << "(Uppercase C or M):\n";
    std::cin >> numOfCurrency >> typeCurrency; 
    if(numOfCurrency < 0)
        std::runtime_error("Are you in debt??? CANNOT CONVERT!");

    //switch statement tree that calls method to convert currency with the proper parameters
    switch(typeCurrency){
        case 'J':
            curConvOutput(numOfCurrency, JPY2NOK, "Yen(JPY)", "Kroner(NOK)", true);
            break;
        case 'N': 
            curConvOutput(numOfCurrency,1/JPY2NOK, "Kroner(NOK)", "Yen(JPY)", false);
            break;
        case 'G':
            curConvOutput(numOfCurrency, GBP2USD, "Pounds(GBP)" , "Dollar(USD)", true);
            break;
        case 'U':
            curConvOutput(numOfCurrency,1/GBP2USD, "Dollar(USD)" , "Pounds(GBP)" , false);
            break;
        case 'C':
            curConvOutput(numOfCurrency, CHF2MXN, "Swiss Franks(CHF)" , "Mexican Peso(MXN)" , true);
            break;
        case 'M':
            curConvOutput(numOfCurrency,1/CHF2MXN, "Mexican Peso(MXN)" , "Swiss Franks(CHF)" , false);   
            break;
        default:
            std::cout << "I do not know that currency or do not have a conversion currentely available.";
            break;
    }

}

//helper method to clean up code in the switch statements. Rule num1, if you're copy and pasting you probably need
//a function
void curConvOutput(double numOfCurrency, double rate, std::string currency1, std::string currency2, bool tick){
    double conversionRate = numOfCurrency * rate; //for readablity in the output
    std::cout << "The conversion rate of " << currency1 << " to " << currency2 << " is " << rate
            << ": " << numOfCurrency << " " << currency1
            << " is " << conversionRate << " " << currency2 << ".\n"; 
    
}

//3.4.2
//method basically maps the ASKII table
void tryThis2(){
    int i = 32;
    char ch = 0;
    while(i < 120){
        ch = i;
        std::cout << ch << "\t" << i << "\n";
        i++;
    }
}

//3.4.2.3
//method basically maps the ASKII table
void tryThis3(){
    int i = 0;
    char ch = 0;
   for(int i = 32; i <= 122; i++){
        ch = i;
        std::cout << ch << "\t" << i << "\n";
   }
}

//3.5.1
//method that using addition to square numbers
void tryThis4(){
  std::cout << "3000 squared == " << square(300);
}

//checks data to see if input is a word I deemed to be bad.
void tryThis5(){
    bool bleep = false;
    std::vector<std::string> v = {"democrat" , "biden", "glass", "water"};

    //std::cout << "In the loop\n";
    for(std::string temp; std::cin >> temp;){//run as long s valid input is given.

        for(int i = 0; i < v.size(); i++){//check each element in vector for a match
            if(temp == v.at(i)){
                std::cout << bleepWord(v.at(i)) << " is a bad word!!";
                bleep = true;
            //has been determined to be a bad word, and is it the last iteration
            }else if(!bleep && i == v.size() - 1){
                std::cout << temp << " is a good word!";
            }
        }
        std::cout << "\n";
        bleep = false;
    }

}

//just returns a string containing stars equal to amount string.length().
std::string bleepWord(std::string input){
    std::string output= "";
    for(int j = 0; j < input.length(); j++){//create a number of starts
         output += "*";
    }
    return output;
}

//squares any integer
int square(int num){
    int temp = 0;
    for(int i = 0; i < num; i++){
        temp += num;
    }
    return temp;
}









/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-10
 * @Description:
 */

#include <iostream>

    void tryThis1();
    void curConvOutput(double numOfCurrency, double rate, std::string currency1, std::string currency2, bool tick);
    void tryThis2();
    void tryThis3();

int main(){
    //tryThis1();
    //tryThis2();
    tryThis3();
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
//method basically aps the ASKII table
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
//method basically aps the ASKII table
void tryThis3(){
    int i = 0;
    char ch = 0;
   for(int i = 32; i <= 122; i++){
        ch = i;
        std::cout << ch << "\t" << i << "\n";
   }
}










/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-10
 * @Description:
 */

#include <iostream>

    void tryThis1();

int main(){
    tryThis1();
}

void tryThis1(){
    /*IMPORTANT INFO
    *Current rate of conversion from yen to kroner : 0.06979
    *Current rate of conversion from pounds to dollar: 1.35312
    */

    constexpr double Y2K = 0.06979;//yen to kroner
    constexpr double P2D = 1.35312;//pounds to dollars
    double numOfCurrency = 0.0;
    char typeCurrency = ' ';

    std::cout << "Please enter the number of currency in floating-point form. Then type the first letter of the "
              << "currency you are converting from. Offered conversion rates are yen:kroner (y or k) and "
              << "pounds:dollar (p or d):\n";
    std::cin >> numOfCurrency >> typeCurrency; 

    if(typeCurrency == 'y'){
        std::cout << "Conversion rate of yen to kroner is " << Y2K << ": " << numOfCurrency << " yen is " 
                  << numOfCurrency * Y2K << " kroner.";
    }else if(typeCurrency == 'k'){
        std::cout << "Conversion rate of yen to kroner is " << 1 / Y2K << ": " << numOfCurrency << "kroner is " 
                  << numOfCurrency / Y2K << " yen.";
    }else if(typeCurrency == 'p'){
        std::cout << "Conversion rate of pounds to USD is "<< P2D << ": " << numOfCurrency << " pounds is " 
                  << numOfCurrency * P2D << " dollar.";
    }else if(typeCurrency == 'd'){
        std::cout << "Conversion rate of USD to pounds is "<< 1 / P2D << ": " << numOfCurrency << " USD is " 
                  << numOfCurrency / P2D << " pounds.";
    }else{
        std::cout << "I do not know that currency or do not have a conversion currentely available.";
    }

}
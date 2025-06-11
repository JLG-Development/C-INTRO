#include <iostream>

//a method than converts currency based on a number of that currency,
//conversion rate and the name of the two currencies involved
void curConvOutput(double numOfCurrency, double rate, std::string currency1, std::string currency2, bool tick){
    double conversionRate = numOfCurrency * rate; //for readability in the output
    std::cout << "The conversion rate of " << currency1 << " to " << currency2 << " is " << rate
            << ": " << numOfCurrency << " " << currency1 //numb of currency one and name of currency
            << " is " << conversionRate << " " << currency2 << ".\n"; 
    
}
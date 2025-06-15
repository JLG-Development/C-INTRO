/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-15
 * @Description: Useful logic
 */


#include <iostream>
#include <vector>

//a method than converts currency based on a number of that currency,
//conversion rate and the name of the two currencies involved
void curConvOutput(double numOfCurrency, double rate, std::string currency1, std::string currency2, bool tick){
    double conversionRate = numOfCurrency * rate; //for readability in the output
    std::cout << "The conversion rate of " << currency1 << " to " << currency2 << " is " << rate
            << ": " << numOfCurrency << " " << currency1 //numb of currency one and name of currency
            << " is " << conversionRate << " " << currency2 << ".\n"; 
    
}

//should work for other data types to, as well as strings etc. Just needs slight tweaking to adapt
void sortVector(std::vector<double>& v){
    if(v.size() < 2)
        return;

        double num1 = 0.0; double temp = 0.0;
        for(int i = 0; i < v.size(); i++){
            num1 = v[0];
            v.erase(v.begin() + 0);
            for(int j = 0; j < v.size() - i; j++){
                //keep advancing numbers forward in the vector as needed
                if(num1 < v[j] && j != (v.size() - i) - 1){
                    temp = v[j];
                    v[j] = num1;
                    num1 = temp;
                }
                //first round pass edge case, largest num on end of vector
                if(i == 0 && j == (v.size() - i) - 1){
                    v.push_back(num1);
                    break;
                }
                //every other case, so as swap on end of inner loop iteration.
                //two equal numbers, and last but not least num1 > v[j] needs to be inserted on the right
                if( i != 0 && j == (v.size() - i) -1){
                    if(num1 <= v[j]){
                        v.insert(v.begin() + j, num1);
                    }else if(num1 > v[j]){
                        v.insert(v.begin() + (j + 1), num1);
                    }
                    break;
                }
            }
            //last two elements come out unsorted do to the relationsship of index and v.size()
            if(i >= v.size() - 1){
                v.insert(v.begin() + 0, num1);
                if(v[0] > v[1]){
                    temp = v[1];
                    v[1] = v[0];
                    v[0] = temp;
                }
            }
        }
    
}
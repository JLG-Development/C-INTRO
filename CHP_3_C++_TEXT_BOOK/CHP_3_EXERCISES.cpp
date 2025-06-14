/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-10
 * @Description: Exercises for CHP_3 Programming: Principles and Practice Using C++, Bjarne Stroustrup
 */


#include <iostream>
#include <vector>
#include <algorithm>

void exercise1();
void exercise2();
void exercise3();

void sortVector(std::vector<double>& v);

int main(){
   // exercise1();
    exercise3();

}

void exercise1(){
    std::string input = "";
    std::cin >> input;

    for(int i = 0; i < input.size(); i++){
        std::cout << "'" << input.at(i) << "' at index " << i << "\n";
    }
}

void exercise3(){
    double median = 0.0;
    double temp = 0.0;

    std::vector<double> v = {2, 3, 4, 5, 6};
    sortVector(v);

    std::cout << v.size() << "\n";

    std::cout << "The vector: \n";
    for(double num : v){
        std::cout << num << ", ";
    }
    std::cout << "\n";

   /* if(v.size() % 2 == 0){
        std::cout << "IM WORKING\n";
        //take the two middle elements, add them together and dvide by 2
        //pull the middle element by taking size dividing by two and pull one to the right as well
        median = (v[v.size() / 2 - 1] + v[(v.size()/2)]) / 2;
    }else if(v.size() % 2 != 0){
        std::cout << "IM NOT WORKING\n";
        //just pull middle element
        median = v[(v.size() / 2) + 1];
    }
    std::cout << "Median is " << median << ".\n"; */
}

//change to just set the values not insert and erase. This will eliminate the off by one error that 
//i cant seem to fucking see.
void sortVector(std::vector<double>& v){
    double num1 = 0.0;
    double displaced = 0.0;

    for(int i = 0; i < v.size(); i++){

        num1 = v[0];
        v.erase(v.begin() + 0);

        for(int j = 0; j < v.size() - i; j++){
            std::cout << "index: " << j << "(" << num1 << ")" << " -----> ";
            if(num1 < v[j] && j != v.size() - i - 1){
                std::cout << j << " swap\n";
                displaced = v[j];
                v[j] = num1;
                num1 = displaced;
            }
            if(j == v.size() - i - 1  && i != 0){
                std::cout << j << " inserted\n";
                v.insert(v.begin() + j + 1, num1);
                break;
            }
        }
        if(i == 0){
            std::cout << "index: " << v.size()-1 << "(" << num1 << ")" << " -----> inserted on end\n";
            v.push_back(num1);
        }
        std::cout << "The vector: \n";
        for(double num : v){
            std::cout << num << ", ";
        }
        std::cout << "\n";

        std::cout << "\n\n+---------------------------+\ninner loop fully iterated + " << i << "\n" ;
        
       
    }

    v.insert(v.begin() + 0, num1);
}
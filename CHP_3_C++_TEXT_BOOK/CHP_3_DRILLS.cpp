/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-11
 * @Description: 
 */

#include <iostream>
#include <vector>

void drill1();
void drill2();

//helper methods
void isSmaller(double x, double y);
void areAlmostEqual(double x, double y);
double parseAndConvert(std::string input);
bool isDigit(char ch);
double convertToMeters(std::string unconvertedLength, std::string unit);
void vectorSort(std::vector<double>& v, double length);
void printPrompt();

int main(){
    //drill1();
    drill2();
}

//part 6 - 11 of CHP_3_DRILLS
void drill2(){
    double length = 0;
    double totalLength = 0;
    std::string input = ""; 
    std::vector<double> v = {};

    printPrompt();//fence-post

    while(std::cin >> input){//user input into the method
        if(input == "DONE" || input == "done")
            break;

        length = parseAndConvert(input);
        totalLength += length;

        vectorSort(v, length);
        std::cout << length << "(m) has been sorted!!\n";
        printPrompt(); 
    }

    std::cout << "Exited while loop!\n\n\n";

    if(v.size() > 1){
        std::cout << "The smallest length so far is " << v.at(0) << "(m)\n";
        std::cout << "The largest length so far is " << v.at(v.size() - 1) << "(m)\n";
        std::cout << "The total length so far is " << totalLength << "(m)\n";
        std::cout << "Total length inputed is " << v.size() << "!\n";

        std::cout << "All lengths printed out smallest to largest: \n";
        for(double num: v){
            std::cout << num << " meters!\n";
        }
    }
    

}

//helper method for drill 2, CHP_3_DRILLS 6-11
void printPrompt(){
    std::cout << "\n\n\n\nPlease input another length in the form of a double followed by a unit of measurement!\n"
        << "(Accepted units of measurement include inch(in), centimeter(cm), feet(ft), and meters(m))\n"
        << "*WHEN DONE ENTER DONE ALL CAPS*)\n"
        << "Please dont enter anything less than or equal to 0 :(\n";

}

//helper method for drill 2, CHP_3_DRILLS 6-11
void vectorSort(std::vector<double>& v, double length){
    if(v.size() == 0)//edge case
        v.push_back(length);

     for(int i = 0 ; i < v.size(); i++){
        //if its smaller than the next value insert @i
        if(length < v.at(i) && length != 0){
            v.insert(v.begin() + i, length);
            break;
        //if it larger than the next value and there is no more after, insert on the end
        }else if(length > v.at(i) && i == v.size() - 1){     
            v.push_back(length);
            break;
        //if two value are equal, insert next to each other
        }else if(length == v.at(i)){
            v.insert(v.begin() + i, length);
            break;
        }
    }
}

//helper method for drill 2, CHP_3_DRILLS 6-11
double parseAndConvert(std::string input){
    std::string unconvertedLength = "";
    std::string unit = "";
    
    //fixes input given. Seperates the length from the unit
    for(int i = 0; i < input.size(); i++){
        //if input.at(i) is any digit or a '.' add it to the length to be parsed
        if(isDigit(input.at(i)) || input.at(i) == '.'){
            unconvertedLength += input.at(i);
        //everything else assumed to be a unit of measurement
        }else if(input.at(i) != 32){
            unit += input.at(i);
        }
    }

    return convertToMeters(unconvertedLength, unit);
    
    
}

//Helper function for drill 2, CHP_3_DRILLS 6-11
//Converts and parses all the string to meters
double convertToMeters(std::string unconvertedLength, std::string unit){
    constexpr double INCHES_IN_FOOT = 12;
    constexpr double CM_IN_METERS = 100;
    constexpr double FEET_IN_METERS = 3.28084;

    //if-statement tree for converting all input into meters
    if(unit == "in"){
        return (std::stod(unconvertedLength)/INCHES_IN_FOOT)/FEET_IN_METERS;
    }else if(unit == "cm"){
        return std::stod(unconvertedLength)/CM_IN_METERS;
    }else if(unit == "ft"){
        return std::stod(unconvertedLength)/FEET_IN_METERS;
    }else if(unit == "m"){
        return std::stod(unconvertedLength);
    }else{
        throw std::runtime_error("Invalid unit of measurement. User tried to break my program *SAD FACE* :( ");
    }
}

//Helper function for drill 2, CHP_3_DRILLS 6-11
bool isDigit(char ch){
    return ch >= 48 && ch <= 57;
}


//+------------------------------------+


//part 1 - 5 of CHP_3_DRILLS
void drill1(){
    double num1 = 0;
    double num2 = 0; 

    std::cout << "Please length 2 valid integer values: ";

    while(std::cin >> num1 >> num2){
        if(num1 > num2){
            isSmaller(num2, num1);
        }else if(num1 < num2){
            isSmaller(num1, num2);
        }
        if(num1 == num2){
            std::cout << "The numbers are equal!\n";
        }else{
         areAlmostEqual(num1, num2);
        }
    }

}

//help to print which is small which is bigger
void isSmaller(double x, double y){
    std::cout << "The smaller number is " << x << "\n"
        <<"The larger number is " << y << "\n";
}

//helper method that checks if two doubles differ by less than .01
void areAlmostEqual(double x, double y){
    if(std::abs(x - y) <= 0.01)
        std::cout << "The two doubles differ by 0.01 or less! They are almost equal!!\n";
}
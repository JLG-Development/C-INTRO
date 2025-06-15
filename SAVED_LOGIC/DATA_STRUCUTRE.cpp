/**
 * @Author: JLG_DEVELOPMENT
 * @GitHub: https://github.com/JLG_DEVELOPMENT
 * @Date: 2025-06-15
 * @Description: Useful logic for modifing data structures
 */

 #include <iostream>
 #include <vector>
//total of all elements in a data structure
double totalDataStructure(std::vector<double>& v){
    double total = 0.0;

    for(double num : v){
        total += num;
    }

    return total;
}

//average of a data structure
double avgOfDataStructure(std::vector<double>& v){
    double avg = 0.0;
    for(double num: v){
        avg += num;
    }
    return avg / v.size();
}
//custom sort method for data structures 
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
                    //if 1 less than largest value, put to left of largest
                    //edge case where largest value is already in place on first pass
                    //place value to left. Done run this the original size is 2 or less
                    //to avoid access out of bounds
                   if(num1 < v[v.size() -1] && v.size() >= 2){
                        v.insert(v.begin() + (j - 1), num1);
                        break;
                    }else{//every other case place largest on the end
                        v.push_back(num1);
                        break;
                    }

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
            /*std::cout << "\n";
            for(double num:v){
                std::cout << num << ", ";
            }
            std::cout << "\n";*/
        }
    
}

//ensures a string is a vlid double. common for reading in numbers into a advanced data structure
bool isDouble(std::string input){
    bool decimal = false;
    for(int i = 0; i < input.size(); i++){
        //if the char a digit or a decimal
        if(!isDigit(input.at(i)) && input.at(i) != '.')
            return false;

        if(input.at(i) == '.' && !decimal){//tracks if a decimal has been seen
            if(decimal == true){
                return false;
            }
            decimal = true;
        }

    }
    return true;
}

//test to see if a char is a digit
bool isDigit(char ch){
    return ch >= 48 && ch <= 57;
}
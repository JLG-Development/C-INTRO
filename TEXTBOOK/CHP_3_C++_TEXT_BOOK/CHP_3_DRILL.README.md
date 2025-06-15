@author JLG_DEVELOPEMENT
@GitHub: https://github.com/JLG_DEVELOPMENT
@date 2025-06-12
@Description: Domentation for drill of CHP_3 Programming: Principles and Practice Using C++, Bjarne Stroustrup
--------------------------------

## Drill  
---------------------------------

Go through this drill step by step. Do not try to speed up by skipping steps. Test each step by  
entering at least three pairs of values – more values would be better.  

----------------------------------
[1] Write a program that consists of a while-loop that (each time around the loop) reads in  
two ints and then prints them. Exit the program when a terminating ‘|’ is entered.  

[2] Change the program to write out the smaller value is: followed by the smaller of the num-  
bers and the larger value is: followed by the larger value.  

[3] Augment the program so that it writes the line the numbers are equal (only) if they are  
equal.  

[4] Change the program so that it uses doubles instead of ints.  

[5] Change the program so that it writes out the numbers are almost equal after writing out  
which is the larger and the smaller if the two numbers differ by less than 1.0/100.  

[6] Now change the body of the loop so that it reads just one double each time around.  
Define two variables to keep track of which is the smallest and which is the largest value  
you have seen so far. Each time through the loop write out the value entered. If it is the  
smallest so far, write the smallest so far after the number. If it is the largest so far, write  
the largest so far after the number. 

[7] Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m.  
Accept the four units: cm, m, in, ft. Assume conversion factors 1m==100cm, 1in==2.54cm,  
1ft==12in. Read the unit indicator into a string. You may consider 12 m (with a space  
between the number and the unit) equivalent to 12m (without a space). 

[8] Reject values without units or with “illegal” representations of units, such as y, yard,  
meter, km, and gallons.  

[9] Keep track of the sum of values entered (as well as the smallest and the largest) and the  
number of values entered. When the loop ends, print the smallest, the largest, the number  
of values, and the sum of values. Note that to keep the sum, you have to decide on a unit  
to use for that sum; use meters.  

[10] Keep all the values entered (converted into meters) in a vector. At the end, write out  
those values.  

[11] Before writing out the values from the vector, sort them (that’ll make them come out in  
increasing order).



# NOTES

-I was looking for this memory leak for a while LOL.
    Program kept running but got stuck. I should have known infinite loop was the culprit. DUH
    I added breaks after each vector modification


    ``` for(int i = 0 ; i < v.size(); i++){
            if(input < v.at(i)){
                v.insert(v.begin() + i, input);
            }else if(input > v.at(i) && i == v.size() - 1){     
                v.push_back(input);
            }else if(input == v.at(i)){
                std::cout << "***CHECK***\n";
                v.insert(v.begin() + i, input);
            }
        }
    ```

-Another inefficiency to learn from. 
    ```return convertedLength = std::stod(unconvertedLength)/CM_IN_METERS;```

    This is uncessarry assignment. Just return the conversion
    
    ```return std::stod(unconvertedLength)/CM_IN_METERS;```

-This could be cleaner
    ```if((input.at(i) >= 48 && input.at(i) <= 57) || input.at(i) == 46){
            unconvertedLength += input.at(i);
        }else{
            unit += input.at(i);
        }```
    
    if(std::isDigit(input.at(i) || input.at(i) == 46)){
        unconvertedLength += input.at(i);
    }else{
        unit += input.at(i);
    }```

    The method is there for a reason

-Minor tweaks include using more functions for clearly seperation computations.
-Dont use "input.at(i) == 46". Nobody has the ASKII table memorized. Use input.at(i) == '.';
-Look for a solution to makes this take a space between the unit and the token. I would have to modify outerloop in drill2 to succefully make it read a second token and im not doing that.


-------------------

# DOCUMENTATION

-------------------

```DRILL 2 (The harder one)`

    Drill2 was designed to allow the user to put input any double value followed by an appropiate char representing a unit of measurement. These units of measurements are converted into an equivalent amount of meters, and stored in a vector in ascending order. The final output for thise program includes the smallest length, largest length, total length, and finally aprinted version of every element contiained in the vector. Accepted units of measurement are inches(in), centimeters(cm), feet(ft), and finally, meters(m). All input must be put on one string literal. Example input: 250.024cm. I was to lazy to read in input until a new line charcters was detected, IT would not have been to hard, but after 6 hours of coding and refracting, I did not feel like modifying the main function and possible creating a new one to validate input.

    This program solves prompts 6 - 11
    
    Functions involed:
        drill2()
        double parseAndConvert(std::string input);
        bool isDigit(char ch);
        double convertToMeters(std::string unconvertedLength, std::string unit);
        void vectorSort(std::vector<double>& v, double length);
        void printPrompt();

    drill2() is the main function for this program. The function does little to no calculations. I refractored all stand alone computations into there ownfunctions. Drill2 only handles user input, and formating the results of the program to the terminal. This function does not take any variables in. All the handling for input and out put are handled inside this function. Input is stored within a string object and used elsewhere in the program.

    double parseAndConvert(std::string input); takes the input given by the user and seperates the length from the unit of measure through ASKII table comparisons and string parsing. The function then returns the length(unit) from the user converted into meters for you later in the program. 

    bool isDigit(char ch); merely checks if a char variables is a digit and returns the respective answer represented by a bool.

    double convertToMeters(std::string unconvertedLength, std::string unit); takes in a string representing the length we pulled from the user input, and another string representing the unit from the user input. 
    The function takes all four units of measurement as well (inches(in), feet(ft), centimeters(cm), and meters(m))
    and returns the value converted into meters. 

    void vectorSort(std::vector<double>& v, double length); is a function that takes a vector pass by reference and a converted length in meters, and stores the length in an appropriate positions within the vector(ascending order). I understand that STL has a sort method for vectors, but for sake of practice i chose to use sorted insertion.

    void printPrompt(); does exactly what its frunction identifier says. Prints the prompt for more input.


```DRILL 1(The easier one)`

    Drill 1 was supposed to be the base for drill 2 (prompts 6 - 11). I opted to just duplicated the code the because the source code for drill one would have been refactored completely and known of my work would have been shown. So drill 1 represent prompts 1 - 5. 

    This program takes in two double values, compares and returns which is larger, if they are equal, and if they are almost equal (within 1.0/100).

    Functions involved:
        -void drill1();
        -void isSmaller(double x, double y);
        -void areAlmostEqual(double x, double y); 

    void drill1 is the meat and potatoes of this program. It prompts the user for input, validates, and returns the expected out put after comparing the two double values.

    void isSmaller(double x, double y); is simply a function for clutter and readbility. Rule number 1, if your copy and pasting code it can like be refactor into a function.

    void areAlmostEqual(double x, double y); checks the absolute value of double a - double b to see if it is less than 1.0/100



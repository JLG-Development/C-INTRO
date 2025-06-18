@author JLG_DEVELOPEMENT
@GitHub: https://github.com/JLG_DEVELOPMENT
@date 2025-06-12

--------------
# Functions:

--------------

int main();

 # Function "int main()" Is just the main flow for the program. It collects user input, call tokenization method, submits the parse input validate which ensures it is a proper mathematical equation, then to evaluate, and finally prints out the evaluated expression. Nothing to crazy going on there. 


int validChars();

 # All helper function dont check for invalid characters such as {`,@,#,$}, because it checked at the beginning of the function. So basically the function just checks for invalid combination of characters

------

std::vector<std::string> tokenization(std::string userInput);

 # Function "std::vector<std::string> tokenization(std::string userInput)" takes the input(user submitted mathematical equation) tokenizes the user input into a vector, each element in the vector representing 1 part of the equation. It does not actually validate the expression, just ensures no invalid input of characters or combination of characrers. So 3.4.3.5 cant be submitted, but things such as "(5 + 9 + x +-/)" Will still be read into the vector as valid, this will be handled in a validation function. 

 # This function accomplishes tokenziation through if tree that basically just checks the userInput string for any invalid characters or combination of characters, if the input is good it will read each token into a vector as its own element. Throws runtime error if invalid input is detected

 # If the bottom of the if tree is reached it is assumed that the string is inavlid.

 # Edge case such as (        -85) is handled by removing all spaces before tokenization
    
   





+-----------------------------+
valid token checks
+-----------------------------+
*NOTE* for simplicity no string modification or referance passing will take place in the valid token checkers. 
All modification to the equation to ensure valid input will take place in functions that parse the token.

bool isDouble();

 # Function "bool isDouble" is checking for valid double input. if there is a valid double it return true. If something weird detected such as a double decimal (1.2.4) is detected it will return false. There are a few other edge cases as well:
    -just a decimal is denied('.')
    -a decimal not followd by a number is denied (i.e. ".x")
    -any combination of numbers with two decimal in it is denied. 
    -if the user input is no valid input for a decimal at all it is denied ('a', @, etc)
 # After edge case checks for invalid input, a for loop reads the rest of the double until it is no longer a digit or the first decimal, and will break the loop returning true. IF a second decimal is detected, it will return false. Effectively covering any and all cases surround parsing a double off the front of a string.



 bool startOfUnaryNeg()
  # Function "bool startOfUnaryNeg()" simply checks for to ensure the size is greater than 2, and if true check for "(-". This works because at the begining of tokenization we remove all the spaces.


 
+-----------------------------+
parse token functions
+-----------------------------+
All functions pass referance to modify the string in particular situation where that is necessary. This way a valid double followed by a variable will return back 6975.345 * xyz vs just 6975.345xyz


std:string parseDouble();

 # This function runs isDouble prior to chopping off a double token off the front of userInput string. So it only continues to read in numbers or decimal under the assumption that the string has already been validating for a proper token. In the case that we have some sort of variable after the valid double, it will modify the user input string to add * to the front of the string.

 std:string parseUnaryNeg();
   
   # This function will take a string passing the referance, And just

 
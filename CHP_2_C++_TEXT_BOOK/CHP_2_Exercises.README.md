@author JLG_DEVELOPMENT
@date 2025-06-10

+----------------------------+
Note from the author: 

Important stuff understanding data types.
Just got out of casuals today, I am now on night rotation for CQ brava schedule at the 315th on Goodfellow AFB.
2 days on 2 days off. Its the panama schedule.



+----------------------------+
CHP_2 Exercises: 

2. Wite a program that converts miles in to kilometers. Your program should have a reasonable prompt for
the user to enter a number of miles. Hint: a mile is 1.609 kilometers.

    I wrote the user prompts in MilesToKilo and did the conversion and valid input check in convert().
    In convert() I checked to make sure the input was > 0. After which, I just returned input / 1.609.

    *NOTE* Do not try to input less than 0, I will personally throw the exception at your face.

*****MilesToKilo() (Line 38) and convert() (line 45) were used to solve this exercise.

4. Write a program that prompts the user to enter two integer values. Store these values in it variables
    name val1 and val2. Write your program to determine the smaller, larger, sum, difference, product,
    and ratio of these values and report them to the user.

    The answer to this exercise is to use if statements, and a bool variables. Everything else is 
    self explanatory. For difference(subtract) and ratio(divide) I assumed do to the unspecified order in
    values are input that the integers should be of a positive value, and that the larger integer is to be
    divided by the smaller integer. Using if statements if found which integer was larger, set the variable "bigger"
    to either true or false, and executed the math based on which variable was bigger.

**** This exercise was solved in the function twoValues() (line 51).


5. Modify the program aboce to ask the user to enter a floating point values and store them in double
    variables. Compare the outputs of the two programs for some inputs of your choice. Are the results the same?
    Should they be? What's the difference?

    Some of the major difference automatically was the output for two unevenly divisble numbers was a floating point
    number. These are common expected differences. There is another issue that can commonly occur when
    dividing/multiplication of floating point numbers is called precision loss error, where tiny rounding errors
    occur, even when the numbers should be evenly divisible or become whole numbers when multiplied.
    Integers are hard set in there ways and as far as I know these errors do not occur in the variable type. 

****Solved in function twoValues2() (Line 90).


6. Write a program that prompts the user to enter three integer values, and then outputs the values in
numerical sequence seperated by commas. So if the user enters the values 10, 4, 6, the output should
be 4, 6, 10. If two values are the same, they should just be ordered together. So, the input 4, 5, 4, 
should out put 4, 4, 5. 

    The solution I found was to use nest if statements to determine the order of the values.
    There is 9 possible orientations for these numbers, I just check for all 9 possible orientations in 
    the if statemetns and print the correct 1. There are 3 possible cases for orientation if two of the values
    are the same, and 1 possible orientation for all three being the same. So in total 13 cases are checked for
    by the if statements to ensure correct orientation. This is by no means scalable. But using a sorting algorithm
    is well beyond the scope of this chapter. However, We can hard code a "similar to bubble sort" if statement tree 
    that swaps the values using temporary variable. This require only 3 if statements as well. But this was the
    suggestion of chatgbt, so I will code both. The bubble sort was my idea as well. I just didnt think of the
    temporary value. It is the credit of chat gbt.

    P.S. I am never hardcoding another if tree that complicated ever again

****ChatGBT suggested function hardCodedBubbleSort() (Line 119).
****Solved in function sort3Val() (Line 146).


7. Do exercise 6, but with 3 string values. So, if the user enters the values Steinbeck, Hemingway,
    Fitzgerald. The output should be Fitzgerald, Hemingway, Steinbeck.

    To rpduce this out put, three strings to recieve input was established. Then we simply compare
    the first letter in each string using the same if tree we used for sorting with chatgbt. 

    -Does not work if there is not uniformity in upeer or lower case of the first letter across all three string.
    -Must be noted that it is comparing unicode values, not alphabetical order, which is why the uppercase/lowercase
        is an issue. Uppercase 'A' has a different unicode value than lowercase 'a'.
    -Cannot not be the same first letter. 

****Solved in function sort3Literal() (Line 193).


8. Write a program to test an integer value to determine if it is odd or even. As always, make sure your
    output is clear and complete. In other words, dont just output yes or no. Your output should stand alone,
    like "The value 4 is an even number.". Hint: See the remained operator in modulo 2.4

    Fairly simple solution. Just take what ever the input is from the user, store it into an int variable, and test
    %2 == 0. Which basically says, if divided by two, does integer  have a remainder. If so, it is not an even 
    number. Hence the function identifier, testRemainder();

 ****Solved in function testRemainder() (Line 227).  


 9. Write a program that converts spelled-out numbers such as "zero " and "Two" into digits, such as
    0 and 2. When the user inputs a number, the program should print out the corresponding digit. Do it for
    the values 0, 1, 2, 3, 4 and write out "not a number I know" if the user enters something that doesnt
    correspond, such as "Stupid computer!".

    Fairly straight foward. Create a string to hold the input. *Extra Credit* convert all characters in the string
    to lower case if they arnt already. Test in an if tree for the inputs "zero", "one", "two", "three", "four" and
    ouput there corresponding digits.

 ****Solved in function exercise9() (Line 240).  


 10. Write a program that takes an operation followed by two operands and outputs the result. For example:
        +100 3.24
        *4 5
    Read the operation into a string called operation and use an if-statement ti figure out which operation 
    the user wants, for example, if (operation == "+"). Read the operands int variable type dobule.
    Implement this for operations called +,-,*,/,plus,minus,mul, and div with their obvious meanings.

    
    Not terribly hard. I read in 3 seperate input into 3 seperate variable.
    I switch tree'd the string variable if the length was only 1, use and if statement tree if someone
    typed out the operation. I proceed to print out the coressponding results for the operands. 

****Solved in function exercise10() (Line 267).  


11. Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), 
    dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins), and one dollar coins
    (100-cent coins). Query the user seperately for the number of each coin, e.g. "How many pennies do you have?"
    Then you program should print out something this:
        You have 23 pennies.
        You have 17 nickels.
        You have 14 dimes. 
        You have 7 quarters.
        You have 3 half dollars.
        The value of all of your coins is 573 Cents!

    Make some improvements: if only one of a coin is reported, make the output grammatically correct, e.g. 
    14 dimes and 1 dime (not dimes). Also, report the sum in dollars and cents, i.e., .73 not 573 cents.


    Fairly simple and straightfoward again. Breaking down the exercise11() function, i created an integer variable
    for each of the different types of coins. I had 6 if statement trees checking to see if there was only 2 of that
    type of coin to ensure gramatical correctness in the terminal. I shrank this to one if statement tree in a helper
    function and just ran the variable/info through that to help clean up the main function.
    I then out put the total money in cents and in dollars.

    The only issue I ran into was originally I was just adding the coins together and divding the total by 100, 
    and initializing the double variable "total" with that value. Only issue was that it was automatically doing
    integer math. Easy way to fix this was to divide by 100.0 instead of 100. 

****Solved in function exercise11() (Line 309).  
****Helper function exercise11Helper() (Line 350).  


 
+-----------------------------+
*Note from the author*

-Biggest take aways. if your copy and pasting code, it can most likely be simplified into a help function.
-Comments and headers are extremely important 
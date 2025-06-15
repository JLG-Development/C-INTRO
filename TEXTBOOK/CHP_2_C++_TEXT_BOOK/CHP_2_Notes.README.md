@author JLG_DEVELOPMENT
@date 2025-06-08

+--------------------+
CHP_2_NOTES
+--------------------+

2.1: Input

All data/input obtained from the user must be stored some how.

-An object is a region of memory or code that takes particular type of information and uses/modifies
it a certain way.
-A prompt is a a message that prompts the user to take action.
-A statement in the program that introduces a new name into a program
and sets aside meory for a variable is called a definetion. 
-A string literal is is refered to charcters between qoutation marks when using cout versus a string, which
contains a set of character values. 

+--------------------+
2.2: Variables

-Almost nothing of interest can be done on a computer without storing data in memory.
-The places in which we store data is called an object.
-A named object is called a variable.
-Values are put into variables. Different values are not interchangable with different variables.
-The five main variables are: String, double, int, char, bool.


-Term list: Object, Variable, Values, String

+--------------------+
2.3: Input and type

-the syntax >> ("get from") will read specifically into the type of variable. 
Similar to jave, which scanner.nextInt(); will be expecting an integer input from the user versus a String.
-If an incorrect value is read into a variable it will just return to its default value.

-Example in C++ where cin>> would be sensitive too two different types of variables would be
std::cin >> first_name >> age;. 
The first input expected is a string, then followed by an integer. This particular scanner goes by white spaces. 
Similar to Scanner class, in which Scanner.next() reads input by tokens (input broken by whtie space). 

+--------------------+
2.4: Operations and Operators

There are many different operators for math inside of the program world.
The compiler knows exactly which of these can be applied to which variables.

-Many different operators available for math, not all operators work for every variables
-% operator take a variable, divides by a number, and returns the remainder.

+--------------------+
2.5: initialization and assignment

-You can assign a string a value with the assignment apoerator (=)
-Strings can be compared and initalized to your advantage. 

- ++n means the same as n = n + 1



+--------------------+
2.6: Names

-Variables names in C++ (most languages in general) may only contain letters, numbers, and underscores
-proper programming will have make variable names distinct, not being distinguished by only one
character. Such as one and oNe.
-Key words are also reserved and cannot be used when naming variables.
-You can use names of facilities found in the c++ library, but dont. 

-MORAL OF THE STORY, NAME YOUR SHIT SOMETHING THAT MAKES sensitive

+--------------------+
2.7. Types and Objects

-An object is some memory that holds a value of a given type. 
-An object has a type defining the type of memory in which it can hold

-A certain amount of memory is allocated to a "type". And the same amount of memory is dedicated each time.
-4 bytes allocated for an int, This can be converted into 2^32 power, which is all the possible numbers
available in an integer
-Types are literally just stored memory until we choose what to do with them. 
Example: integer 120 and 'x' are stored the exact same in memory. 

-A bit is a unit of memory that can store a 0 or a 1


+--------------------+
2.8: Type safety

-Type safety refers to using variables only as they were intended, particulary conversions
-Rule 1, always initalize your variables.


+--------------------+
2.9: conversions

-We cant directly compare a double to a char or an int. C++ provides a roundabout way to do so.
-Narrow is when we type cast something large to a value of something smaller and we might lose memory.
Such as an integer (4 bytes) to a char(1 bytes); 
-Widening is the inverse of narrowing

-This may be useful say you need a double rounded down to the nearest whole number,
type cast the floating point number to an integer and the remained will be chopped off
lost to the dark abyss of RAM.


+--------------------+
2.10: AUTO VRAIBALE Type

-Similar to var in java. auto variables type just says figure out what the heck the information type is.

-Switch are used for descision trees!!

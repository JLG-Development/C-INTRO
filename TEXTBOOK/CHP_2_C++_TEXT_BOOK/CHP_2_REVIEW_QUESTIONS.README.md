@author JLG_DEVELOPMENT
@date 2025-06-09

+--------------------------+
Note from the author

Doing this while listening to techno music. I have about 1.5 months left until tech school starts.
Going to keep studying during that time I will just heal my gut before then and get caught up on
computer science.

+--------------------------+
CHP 2 REVIEW QUESTIONS:



1. What is meant by the term prompt?

    The term prompt is refering to output in the term that prompts the user for
    certain type of information.


2. Which operator do you use to read into a variable?

    The >> operator is used to read into a variable.


3. What notations can you use to initialize and objects?

    The notations that can be used t o initialize an objects include: {}, = {}, =, ().


4. If you want the user to input an integer value into your program for a variable name number,
    what are the two line of code you could write to ask the user to do it and input the value into your program.

    std::cout << "Please enter a valid integer: ";
    std::cin >> number;


5. What is \n called what purpose does it serve?

    \n is called the new line character. It produces a new line in the terminal
    provide clean formatting and readability in the terminal. 


6. What terminates input into a string?

    Traditionally, if the input is not in some type of loop, input into a string is terminated
    by white space between words. This can be fixed with concatenation operators. 


7. What terminates input into an integer?
    I am not sure what this question is infering. Assignment of any valid integer value into an
    integer variable terminates the input. 


8. How would you write the following as a single line of code?
    cout << "Hello, ";
    cout << first_name;
    cout << "!\n";

    Answer:
        std::cout << "Hello " << first_name << "!\n";


9. What is an object? 
    And object is an allocated space in memory that holds information of a particular type. 


10. What is a literal?

    A literal refers to a string literal, which basically means the type of information that should
    go into a variable. In the case of a string literal this would be 
    a fixed set of characters enclosed by qoutation marks hardcoded into the source code.
    I.E. "duhnoiudfiubgv"


11. What kinds of literals are there?

    Integer literal : 98, 0, ETC.
    Character literal: 'f', 'g', ')'
    String literal: "ufdyhbivc"
    Boolean literal: true, false 
    Floating-Point literal: 4.5, 7.6, 0.0


12. What is a variable? 

    A variable is an object that holds a particular type of information.


13. What are typical sizes for a char, an int, and a double.
    The typical sizes for char, int, and double are as follows:
        -int is 4 bytes
        -char is 1 byte
        -double is 8  bytes


14. What measures do we use for the size of small entities in memory, suchs as ints or strings.

        We measure small entities in memory using bytes (8 bits)


15. What is the difference between = and == ?

    The difference between = and is == is quite simple.
    = is the operator used for assignment, which in laymans terms mean to assign
    a variable a value. == is used to compore to variable values to check for equality,
    and is commonly used for boolean logic.


16. What is a definetion?

    A defintion (not to be confused with the declaration) is the statement that sets aside
    memory for an object (giving it context). Where as a declaration is just to give a 
    name and type to an object yet to be defined.


17.  What is initialization and how does it differ from assignment?

    Initialization and assignment differ in many ways. First and for most initialization just
    gives and object an initial value. Assignment reassigns the object a different value.


18. What is string concatenation and how do you make it work in C++?

    String concatenation is tacking one strings content onto the end of another string.
    To get this to work in c++, simply use the += operator.


19. What operators can you apply to an int. 

    Most operators can be applied to an int. There are a few that stand out as most useful
    when doing linear algebra. 

    Operators that can be applied to int:
    Assignment operator:      =
    Addition operator:        +
    Subtraction operator:     -
    Division operator:        /
    Multiplication operator:  *
    Remainder operator:       %

    There are about 20 others and this is why google was invented.


20. Which of the following are legal names in C++? If a Name is not legal, why not?

    This_little_pig
    George@home
    correct?
    This_1_is_fine
    _this_is_ok
    stroustrup.com
    2_For_1_special
    MineMineMine
    $PATH
    latest thing
    number

    Starting from the top:
    "This_little_pig" is a legal name in c++.
    "George@home" is not a legal name in c++. @ is a reserved character
    "correct?" is not a legal name in c++. The only allowed characters are letters, underscores, and numbers.
    "This_1_is_fine" is a legal name in c++.
    "_this_is_ok" is a legal name in c++.
    "stroustrup.com" is not a legal name. The only allowed characters are letters, underscores, and numbers.
    "2_For_1_special" is a legal name in c++.
    "MineMineMine" is a legal name in c++.
    "$PATH" is not a legal name in c++. The only characters are letters, underscores, and numbers,
    "latest thing" is not a legal name in c++. The only allowed characters are letters, underscores, and numbers.
    "number" is a legal name in c++.

21. Give five example of legal names that you shouldnt use because they are likely to cause confusion.
    
    The following are some legal names that should not be used due to confusion.
        1. MAIN 
        2. String, STRING
        3. Integer, INTEGER
        4. IF, If
        5. null, null


22. What are some good rules for choosing names?

    Some good rules all programmers should follow when naming objects are simple.
    1. reserve all caps for constant values. 
    2. Dont make the name rediculously long an descrciptive.
    3. Make the name actually mean something that makes sense. 
    4. Keep for loop variables at a single letter unless necessary to rename for clarity.


23. What is type safety and why is it important?

    Type Safety is used to prevent wrong operators or incorrect information types from being used
    with a specific variable type.


24. Why can a conversion from a double to int be a bad thing? 

    A conversion froma double to an int can be a bad thing because of information loss. 
    Double or a floating point number is a ration number. When type casted to an integer whos value is a whole 
    number, everything after the decimal point is loss. 


25. Define a rule to help decide if a conversion from one type to another is safe or not?

    A good rule to follow is if precision or accuracy is unecessary, typecasting, inparticular narrowing
    is safe to procede with. IF narrowing must be done an accuracy is important (I.E. rounding to the nearest
    whole number vs just rounding down to the nearest whole number) rounding method from CMATH library must be used.
    If the floating point information after the decimal is crucial there are other methods to check to see if
    information loss will occur when typecasting.

26. How can we avoid undesirable conversions?

    We can avoid undersirable conversion by using functions such as narrow<integer>(double) to check for
    information loss before typecasting. We can also use Methods that round floating point numbers to the 
    nearest whole number, versus rounding down to the nearest whole number by force typecasting a flaoting point
    number. This goes with conversion of a integer to a char as well. 

    There are also settings inside of compiler to warn programmers when typecasting is going occur in there program.
    This is sometimes a setting that must manually be turned on.


27. What are the uses of auto?

    The uses of auto are mostly more important later into software engineering, where obvious typecasting occurs.
    Auto at this level could be useful when wanting to save memory for storing solution to mathematical
    problems, when the type of information depends on user input, and could either result in an int or a floating
    point number. auto with automatically assign the value to the proper variable type. Most of the uses
    are beyond the scope of this chapter. 
    
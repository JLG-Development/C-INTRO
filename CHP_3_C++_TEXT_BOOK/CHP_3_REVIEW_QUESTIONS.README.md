@Author: JLG_DEVELOPMENT
@GitHub: https://github.com/JLG_DEVELOPMENT
@Date: 2025-06-12
@Description: Review Questions from CHP_3 of Programming: Principles and Practice Using C++, Bjarne Stroustrup

-----------------------------
*Note from the author*
I wrote the answer out on paper first and transfered them over after I was done so I could work on them while
I was on cq at the 315th TRS.

-----------------------------

[1] What is a computation?

    A computation is a calculation or logical expression that does with/too i/o data.


[2] What do we mean by inputs and outputs to a computation?

    I/O in ragrds to computation refers to input data being modified to produce output data. The 
    modification(computation) refers to a method, function, or block statement (or a ragard to simpler
    computation, a singluar statement (1 line expression)) that handles and changes input data to produce
    desired output data.

    Examples: -input data ---> 609
              -Function call square() with 609 submitted as a parameter
              -square(609) reutrns 609^2(== 370,881)

    Example2: -input data ---> vector with 100 random integers
              -Function(computation) bubbleSort(vector) is called
              -bubbleSort(vector) sorts the vectors using a coed buble sort algorithm &
                returns the sorted vector.


[3] What are the three requirements a programmer should keep in mind when expression computations?


[4] What does an expresion do?

    An expression is merely a mathematical computation.


[5] What is the difference between a statement and an expression, as described in this chapter?

    An expression is a mathematical computation while a statement just refers to some action. Statements can be logical checks, functions calls, declaration, etc. Its scope is broader


[6] What is an lvalue? List the operators that require an lvalue. Why do these operators, and not the others, require an lvalue?



[7] What is a constant expression?

    A constant expression is a var whols value is can be calculated at compile time. Not to be confused with
    a constant, which can be can determined at run time or compile time.


[8] What is a literal?

    A literal is a value or data unassigned and unamed in the code but still has a type. Often used to
    initalize variables. Examples: 1, "abcd", 9.34


[9] What is a symbolic constant and why do we use them?

    "A symbolic constant is a name that represents a fixed value, so it can be used symbollically in code
    instead of repeating the literal." - ChatGBT


[10] What is a magic constant?

    A magic constant is a unobvious(i.e not just number 1) literal value used multiple times in code to calculate computations but is not assigned a variable or a name. An example is using the speed of light multiple times
    but not assigned it to a constant expression variable such as SPEED_LIGHT.


[11] What are some operators we can use for integers and floating-point values?

    Some operators that can be used both on integers and floating-point values include, +, -, *, /, ==, >, <, etc.

[12] What are some operatores that can be used on integers and not flaoting-point values?

    An operator than can be used on integers and not on a floating-point values would be the modulo(%) operator.


[13] What are some operators that can be used for strings?


[14] When would a programmer prefer a switch-statement to an if-statement?


[15] What are some common problems with switch-statements?


[16] What is a function of each part of the header line in a for-loop, and in what sequence are they executed?


[17] When should the for-loop be used and when should the while-loop be used?


[18] Describe what the line char foo(int x) means in a function definition?


[19] When should you define a seperate functio for pat of a program? List reasons.


[20] What can you do to an int that you cannot do to a string?


[21] What can you do to a string that you cannot do to an int?


[22] What is the index of the third element of a vector?


[23] How do you write a for-loop that prints every element of a vector?


[24] What does vector<char> alphabet(26); do?


[25] Describe what push_back() does to a vector.


[26] What does vector's member size() do?


[27] What make a vector so popular/useful?


[28] How do you sort the elements of a vector?
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


[3] What are the three requirements a programmer should keep in mind when expressing computations?
    
    The three requirements a programmer should keep in mind when expressing computations are correctness, readability, and efficiency. 
    

[4] What does an expresion do?

    An expression is merely a mathematical computation.


[5] What is the difference between a statement and an expression, as described in this chapter?

    An expression is a mathematical computation while a statement just refers to some action. Statements can be logical checks, functions calls, declaration, etc. Its scope is broader


[6] What is an lvalue? List the operators that require an lvalue. Why do these operators, and not the others, require an lvalue?

    lvalue are permenant variables inside of a program, where on the contrast rvalues represent temporaru variables within a program. The follow operators require an lvalue: ++, --, and any variation of the assignment operator. 
    The operators require a lvalue because the change data within an object, and thus need a permenant memory locationg to operate on. 

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

    Some of the operators that can be used for strings include + (concatenation), =, ==, >>, and <<.


[14] When would a programmer prefer a switch-statement to an if-statement?

    A switch statement is best used if a variable (enum, integer, or char) need to be tested case by case to 
    ensure correct output. These cases are simply looking for equivalent and cannot be a comparison. 
    If-statements are far superior for more complex comparison/expressions, multiple variables, or
    simply needing to go case by case for any variable type other than integer, enum, and char.


[15] What are some common problems with switch-statements?


    There are definetely a few limitations to switch-statements. First and for most they can only be use
    for integers, chars, and enums, which can be limiting especialyl when comparing strings, or doubles.
    Secondly, the case by case system that is used is only for simple comparison, in particular
    x = y. Any more complicated expression must be used in an if tree. Which can at times, be very hard to 
    understand and read depending on how complicated the logic is. Also, invalid input is dealt with at
    the end of a switch-statement in the dafault: case. This can be very inefficient depending on the size of 
    switch statement. Not so much of an effect that it should be noticable. But in a much larger scale project,
    every little ineficciency couts.This can be easily solved with check for bad input before defining the switch
    statement though, so once again, not a very significant limiting factor.

[16] What is a function of each part of the header line in a for-loop, and in what sequence are they executed?

    Their are three parts to the header of a for-loop each with there own distinct purpose. 
    These three parts are the initialization statement (loop control variable), the condition (or loop continuation condition), and the increment, which are all executed in the order listed. The initializer initializes the 
    loop-control variable to the value needed(Depending on the circumstances and further uses of the variable). The condition is a comparison that must evaluate true in order for the loop to continue execution. 
    And finally, the increment increments or decrements(depending on whats needed) the loop control variable by a 
    specific amount.


[17] When should the for-loop be used and when should the while-loop be used?

    A for-loop should be used when the logic for incremenation and the comparision expression are both relatively simple and straight foward. For incrementation or comparision expression that are significantly more complex or 
    are effected by user input, a while-loop should be used instead


[18] Describe what the line char foo(int x) means in a function definition?

    The line "char foo(int x)" in a function defintion is known as the function header. "Char" is the retunr type of the function and is always expected to return a char at the end of the function definition. "foo" is the function identifier and is used to help dinstinguish this function. "(int x)" is the type of parameter this function will accept, and is used to pass input data to the function for modification or computation to produce the correct output.


[19] When should you define a seperate function for part of a program? List reasons.

    The two situations you should seperate a function from part of a program are very clear. The computation or modifcation that the functions performs is either used multiple times in the program or is clearly stand alone from the rest of the code. The reasons for sperating functions is to produce high cohesion - low coupling in the code and to increase readbility and understanding for readers. High cohesion is to  have each block of computation work well with one another, low coupling is to keep blocks of computation from being overly dependent on one another. This increases scalability of the program.

[20] What can you do to an int that you cannot do to a string?

    There are multiple operations you can do to integer type variable that is unperformable on a string. Some of these operations include -, /, *, %, ++, --, trunacation (narrowing of double type variables), etc.
    
[21] What can you do to a string that you cannot do to an int?
    
    There are several operations that can be performed on a string that cannot be perform on an integer. These include concatenation, assignment to null or empty, iteration of the literal(i.e "994875", "isudug"), etc.

[22] What is the index of the third element of a vector?

    The index of the third elment in a vector is 2. This is because most advanced data types including vectors, start indexing at 0 instead of 1.


[23] How do you write a for-loop that prints every element of a vector?

    To write a for-loop that prints every element of a vector, input the following syntax:
        -If using a range for-loop:
            for(auto temp: vector)

        -If using a traditional for-loop:
            for(int i = 0; i < vector.size(); i++)


[24] What does vector<char> alphabet(26); do?

    "vector<char> alphabet(26);" initializes a char vector(hold data of type char) and initializes the size to 26.


[25] Describe what push_back() does to a vector.

    "push_back" inserts data onto the back of a vector.


[26] What does vector's member size() do?

    Vector's member "size()" returns the length of the vector.


[27] What make a vector so popular/useful?

    Vector's are very popular and useful because it is a simple and easy to use advanced data type. Meaning it can store significantly more information than any indivdual variable but is also structured so that is dynamic unlike a array, though both data types have there purposes. For example, the is no justifiable reason for using a vector instead of an array in say a chessboard, which is typically an array of array that holds either integer, or char. A chessboard is unchanging in its size. Vectors would not be ideal and would be waste memory having a dynamic data type on something that is a constant expression (can be calculated at compile time).


[28] How do you sort the elements of a vector?

    There are two ways to sort the elements in a vector. Either use the built in sort "member" in the C++ standard library or hardcode a sorting algorithm into a function and use that instead. A simple algorithm that would be inefficient but would get the job done is bubble sort. 
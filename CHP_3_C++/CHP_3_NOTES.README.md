@Author: JLG_DEVELOPMENT
@GitHub: https://github.com/JLG_DEVELOPMENT
@Date: 2025-06-10
@Description: Notes from CHP_3 of Programming: Principles and Practice Using C++, Bjarne Stroustrup


+------------------------------+
3.1 Computation

-Most programs can be boiled down to input/output
-Input can come from various places, and the output can go to various places.
-The category that is most intersting and applicable to programmers/developers would be to/from parts of one program
    to/from others parts of a program. How do we express programming as a set of coorperating parts, and how can 
    they share and exchange data.

    This would look like input ---> code ---> i/o ----> code -----> i/o -----> code -----> output
    Most of the time input/output (i/o) is from one part of code to another part of code.

    input/output often refers to information coming into and out of a program, also known as arguments and results.
    This is what computation is.

+------------------------------+
3.2 Objectives and tools

    -Our primary jobs as programs is to express computations
        correctly
        simply
        efficiently

    -If our program is so freaking complicated that its becomes impossible to work on, especially when the task is
    modified, our program becomes useless. Therefor the structure of the code is important. Not just throwing the
    code together it works. It must be easy to read and understand for other developers. 
    Being concerned with the structure of the code is often the fastest way to get code to work, makes debugging
    easier, and increases scaleability significantly.

    -Often break the problem at hand down in several smaller tasks is the most effiecient way to program. 
    Solving several smaller issues is far easier to understand and develop than one, large, merged mess.
    Especially with larger programs, debugging becomes much hard at 1000 lines plus, but doable. For a larger program,
    10,000,000 lines, monolithic programs, divide and conquer method of the solving the larger issue at hand is the
    only way to deliver a working product. HOW DO YOU EAT AN ELEPHANT?? ONE BITE AT A TIME!!

    -Use abstraction when you can. If there is an exsisting library, use it. This will save time documenting and time
    testing source code. Dont reivent the wheel.

    -Building monolthic programs without divide and conquer or abstraction is just like building with mudbricks,
    it can be done, but you will never reach the tenth floor.


+------------------------------+
3.3 Expressions

    -An EXPRESSION is mearly something that computes values.  
    -A variable is simply represent the object of which it is the name. 
    -Primitive types such as integer, boolean, double, are still treated like objects in C++. They have an allocated
    space in memory, they have a name, and they have a value. When creating a custom object, you are essentialy 
    creating your own data type with set of rules, name, and nature.

    -When creating mathematical expressions, use your parenthesis. The compiler doesnt know mathematical expressions. IF it is logical, and it cannot tell what you are trying it will just do order of operations left to right. When in doubt use parenthesis. 
    -Overuse of parenthesis reduse readbility and create ugly code, which makes code harder to read and even worse,
    harder to debug. Break expression down and keep readability a priority.

    +------------------------------+
    3.3.1: Constant Expressions

    -Most programs have variables with values that will never change. These are call constants.
    -Instead of hardcoding constant expression into the code, create a constant variable that will allow change when
        needed.
    
    +------------------------------+
    3.3.2
    Advanced operators
    Theres a shit ton more operators. Multiple full lists online.
    a *= scale is the same as a = a * scale
    a = 1 is the same as a = a + 1
    etc.

+----------------------------------+
3.4: Statements

    -Declartion statement Initializes or declares a variable.
    -Expression statement actually takes data and acts upon it(call a function, compute, etc.).

    Most compilers use the semi colon to distinguish between statements. 
    Imagine the english sentence "man eating tiger". Whom is eating whom?
    Now adding a dash, "man-eating tiger" we are given contect. This is what the semi colon does for the compiler.
    a = b
    ++C; 
    The compiler does not know if we are asking for a=b++c; or a = b; ++c; So semi colons are mighty important distinguish between statements in the code.
    -Empty statements are a thing. For example:
        if(x == y);
            z = 3;
    The if statement is looking to execute the next statement conditionally, which is the semi colon after the if statement. z = 3 will always execute in this code. 

    +------------------------------+
    3.4.1: Selection
        -If-statements and switch-statements are used to select among alternatives. AKA. forms of selection.

        +------------------------------+
        3.4.1.1: if-statements
            -if-statements are the simpelest form of selection in C++. Some use if-statements to simple mindedly.
            -Check for multiple cases in depth and always prepare for garbage input from the users, build to 
                handle it. 
            -Remember more complex does not equal smarter. Demonstrate competence by creating the most simple code
                for the job.
        +------------------------------+
        3.4.1.2: switch-statements
            -If we have a single variable against which we are comparing several constants, it is more suitable
            to use the switch-statements.
            -switch statements have a default:. Whic is the equiavlent of the final else in an if-statement tree.
            -Do not forget "break" after each case or it will go through the entire tree.

        +------------------------------+
        3.4.1.3: Switch Technicalities
            -The value on which we switch in C++ must be an integer, char, or enumeration. 
            -The variable inside of a case label must be a const expression.
            -You cannot use the same value for two cases.
            -You can use several case lebels for one case.
            -Dont forget to ass breaks after each case.

            -Often we was the same action for several cases, so we can go
                case 'n': case 't': case 'm':
                    //do this
                    break;
                case 'p': 
                    //do this
                    break;
            -The break is not to exit the switch statement but to exit the case. 
                or your will fallthrough to the next case and perform whatever action is in that case as well.
                Use [[fallthrough]]. 
    +------------------------------+
    3.4.2: Iteration (followed in function tryThis2())
        -Doing the same thing to a series of objects is called iteration.
        -we use a loop and repeat a statement a certain number of times as long as an expression is true
        -We can demonstrate this with a while loop and by increasing a variable in the expression till the 
          comparision is no longer true.
          while(i < 100){
            //do random action
            //i++;
          }

         -block Statements: code to be executed within {}
         -for statements
            -specifically design to iterate over sequence of numbers. Used to get rid of the
            while loop-method of iteration.

            for(int i = 0; i < 100; i++){
                //do random action
            }

           ****If your loop control variable can be incremented with a simple increment operation
                use a for loop. If you need to modify the loop control with a more complex incrementing operation
                use a while loop. Dont ever modify the loop control variable inside the body of the for loop because
                it undermines every readers assumption about what the for loop is doing.

            There is also a range for loop for traversing advanced data structures. 
    
+----------------------------------+
3.5: Functions
    -A function is a named secuence of statements, and can return a result
    -The standard library contains a lot of useful functions
    -Functions should be used to create computation blocks, this created high-cohesion (each part works together well) and low coupling (compenents dont overly depend on each other)
    -The different parts of a program need to be clearly named and seperated. 
***Programs are easier to understand if each function performs a single logical action. 
    
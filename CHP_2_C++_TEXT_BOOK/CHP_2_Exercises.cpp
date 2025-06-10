#include <iostream> 
#include <cmath>

double convert(double miles);
void milesToKilo();
void twoValues();
void twoValues2();
void hardCodedBubbleSort();
void sort3Val();
void sort3Literal();
void testRemainder();
void exercise10();

int main(){
    
   // milesToKilo();
   // std::cout << "\n+-----------------------------+\n";
   /* twoValues();
    std::cout << "\n+-----------------------------+\n";
    twoValues2();
    std::cout << "\n+-----------------------------+\n";
    hardCodedBubbleSort();
    std::cout << "\n+-----------------------------+\n";*/
    //sort3Val();
    //std::cout << "\n+-----------------------------+\n";
    //sort3Literal();
    //std::cout << "\n+-----------------------------+\n";
    //testRemainder();
    //std::cout << "\n+-----------------------------+\n";
    exercise10();
}

//chp_2 exercise 2 solution
void milesToKilo(){
    double miles = 0.0;
    std::cout << "Please enter a valid number of miles you wish to convert to km (floating point is exceptable): ";
    std::cin >> miles;
    std::cout << miles << " mile(s) in kilometers == " << convert(miles) << ".\n";
}
//Converts miles to kilometers
double convert(double miles){
    if(miles < 0)//prevents invalid input
        std::runtime_error("Please enter a valid value for miles!");
    return (miles * 1.609);//miles to kilometers
}
//chp_2 exercise 4 solution
void twoValues(){
    int a = 0;
    int b = 0;
    bool bigger = true;

    std::cout << "Please enter two integer values: ";
    std::cin >> a >> b;
    std::cout << "\n\n";

    if(a > b){//which value is larger
        std::cout << a << " is > " << b << ".\n";
    }else if(a < b){//which value is larger
        std::cout << a << " is < " << b << ".\n";
        bigger = false;
    }
    //add to the two values together
    std::cout << "The sum of " << a << " & " << b << " == " << a + b << ".\n";

    if(bigger){//subtract the smallest value from the largest value
        std::cout << a <<  " - " << b << " == " << a - b << ".\n";

        //multiply the two values
        std::cout << "The product of " << a << " & " << b << " == " << a * b << ".\n";

        //divide the larger by the smaller
        std::cout << a << " / " << b << " == " << a/b << ".\n";
    }else{
        //subtract the smaller from the larger value
        std::cout << b <<  " - " << a << " == " << b - a << ".\n";
        //multiple the two values
        std::cout << "The product of " << a << " & " << b << " == " << a * b << ".\n";
        //divide the larger by the smaller
        std::cout << b << " / " << a << " == " << b/a << ".\n";
    }

    std::cout << "\n\n";

}
//chp_2 exercise 5 solution
void twoValues2(){
    double a = 0;
    double b = 0;
    bool bigger = true;

    std::cout << "Please enter two floating-point values: ";
    std::cin >> a >> b;
    std::cout << "\n\n";

    if(a > b){
        std::cout << a << " is > " << b << ".\n";
    }else if(a < b){
        std::cout << a << " is < " << b << ".\n";
        bigger = false;
    }
    std::cout << "The sum of " << a << " & " << b << " == " << a + b << ".\n";
    if(bigger){
        std::cout << a <<  " - " << b << " == " << a - b << ".\n";
        std::cout << "The product of " << a << " & " << b << " == " << a * b << ".\n";
        std::cout << a << " / " << b << " == " << a/b << ".\n";
    }else{
        std::cout << b <<  " - " << a << " == " << b - a << ".\n";
        std::cout << "The product of " << a << " & " << b << " == " << a * b << ".\n";
        std::cout << b << " / " << a << " == " << b/a << ".\n";
    }

    std::cout << "\n\n";
}
//chp_2 exercise 6 solution 1
void hardCodedBubbleSort(){
    int a = 0;
    int b = 0;
    int c = 0;
    int temp = 0;
    std::cout << "Please enter 3 valid integer values: ";
    std::cin >> a >> b >> c;

    if(a > b){//test if a is larger than b
        temp = a; //save a
        a = b;    //move be to a since its smaller
        b = temp; //put a original value into b
    } if (b > c){
        temp = b;
        b = c;
        c = temp;
    }if(a > b){
        temp = a;
        a = b;
        b = temp;
    }

    std::cout << a << ", " << b << ", " << c;


}
//chp_2 exercise 6 solution 2
void sort3Val(){
    int a = 0;
    int b = 0;
    int c = 0;
    
    std::cout << "Please enter 3 valid integer values: ";
    std::cin >> a >> b >> c;

    //im not going to even try to explain this. It basically just test for every possible permutation
    //of a, b, and c. And looking at hurts my brain. 
    if(a == b && b == c){
        std::cout << a << ", " << b << ", " << c;
    }else if(a == b || b == c || c == a){
        if(a == b){
            if(a > c)
                std::cout << c << ", " << a << ", " << b;
            if(a < c)
                std::cout << a << ", " << b << ", " << c;
        }else if(b == c){
            if(c > a)
            std::cout << a << ", " << b << ", " << c;
            if(c < a)
                std::cout << b << ", " << c << ", " << a;
        }else if(c == a){
            if(c < b)
                std::cout << a << ", " << c << ", " << b;
            if(c > b)
                std::cout << b << ", " << c << ", " << a;
        }
    }else if((a > b) && (a > c)){
        if(b > c)
            std::cout << c << ", " << b << ", " << a;
        if(b < c)
            std::cout << b << ", " << c << ", " << a;
    }else if((b > a) && (b > c)){
        if(a > c)
            std::cout << c << ", " << a << ", " << b;
        if(a < c)
            std::cout << a << ", " << c << ", " << b;
    }else if((c > a) && (c > b)){
        if(a > b)
            std::cout << b << ", " << a << ", " << c;
        if(a < b)
            std::cout << a << ", " << b << ", " << c;
    }
}
//chp_2 exercise 7
void sort3Literal(){
    std::string literal1 = ""; 
    std::string literal2= "";  
    std::string literal3 = ""; 
    std::string temp = "";

    std::cout << "Please enter 3 valid string literals: ";
    std::cin >> literal1 >> literal2 >> literal3;

    //pulls first character from each string
    literal1.at(0);
    literal2.at(0);
    literal3.at(0);
        
    //moves each of the string into alphabetical order
    if(literal1.at(0) > literal2.at(0)){
        temp = literal1; //save the first string input
        literal1 = literal2; //move the second strings input to the first string
        literal2 = temp;//reassign the first to the second
    } if (literal2.at(0) > literal3.at(0)){
        temp = literal2;
        literal2 = literal3;
        literal3 = temp;
    }if(literal1.at(0) > literal2.at(0)){
        temp = literal1;
        literal1 = literal2;
        literal2 = temp;
    }

    std::cout << literal1 << ", " << literal2 << ", " << literal3;


}
//chp_2 exercise 8
void testRemainder(){
    int input = 0;
    std::cout << "Please input and continue to input a valid integer to test whether positive or negative"
              << "(To exit, press ctrl z followed by enter): ";
    while(std::cin >> input){
        if(input % 2 == 0){
            std::cout << input << " is an even number!\n";
        }else{
            std::cout << input << " is not an even number!\n";
        }
    }
}
//chp_2 exercise 9
void exercise9(){
    std::string input = "";
    std::cout << "Please spell out a number 0 - 4: ";
    std::cin >> input;

    //if input is actually a letter it will be converted to lower if not already
    for(int i = 0; i < input.length(); i++){
        if(input.at(i) >= 65 && input.at(i) <= 90){
            //32 not 26 because of a 6 character gap between upp and lower case in the ASKII table
            input.at(i) = input.at(i) + 32;
        }
    }
    //convert the word corresponding to a number into a digit and print to the terminal
    if(input == "zero")
        std::cout << input << " == " << 0;
    else if(input == "one")
        std::cout << input << " == " << 1;
    else if(input == "two")
        std::cout << input << " == " << 2;
    else if(input == "three")
        std::cout << input << " == " << 3;
    else if(input == "four")
        std::cout << input << " == " << 4;
    else
        std::cout << "I do not know that number";
}
//chp_2 exercise10
void exercise10(){
    std::string sign = "";
    double operand1 = 0;
    double operand2 = 0;

    std::cout << "Please enter a mathematical operator (+, -, *, /) and two valid operands:";
    std::cin >> sign >> operand1 >> operand2;

    if(sign.length() > 1){
        switch(sign.at(0)){
            case '+':
                std::cout << "The sum of " << operand1 << " and " << operand2 << " == " << operand1 + operand2;
            case '-': 
                std::cout << "The difference between " << operand1 << " and " << operand2 << " == " << abs(operand1 - operand2);
            case '*':
                std::cout << "The product of " << operand1 << " and " << operand2 << " == " << operand1 * operand2;
            case '/':
                if(operand1 > operand2){
                    std::cout << "The ratio of " << operand1 << " and " << operand2 << " == " << operand1 / operand2;
                }else{
                    std::cout << "The ratio of " << operand2 << " and " << operand1 << " == " << operand2 / operand1;
                }
        }
    }else{
        if(sign == "plus"){
            std::cout << "The sum of " << operand1 << " and " << operand2 << " == " << operand1 + operand2;
        }else if(sign == "minus"){
            std::cout << "The difference between " << operand1 << " and " << operand2 << " == " << abs(operand1 - operand2);
        }else if(sign == "mul"){
             std::cout << "The product of " << operand1 << " and " << operand2 << " == " << operand1 * operand2;
        }else if(sign == "div"){
            if(operand1 > operand2){
                std::cout << "The ratio of " << operand1 << " and " << operand2 << " == " << operand1 / operand2;
            }else{
                std::cout << "The ratio of " << operand2 << " and " << operand1 << " == " << operand2 / operand1;
            }
        }
    }
}



std::string longestString(std::string a, std::string b ,std::string c){
    if(a.length() > b.length()){
        b = a; 
    } if (b.length() > c.length()){
        c = b;
    }
    return c;
}
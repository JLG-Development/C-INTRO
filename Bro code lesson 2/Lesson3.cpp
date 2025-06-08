#include  <iostream>
#include <string>

    //NAMESPACE
    //PRovides a solution for preventing name conflicts
    //especially in larger conflicts

    namespace first{
        int x = 1;
    }
    namespace second{
        int x = 2;
    }

    int main(){
        //assumes im using x from a specific namespace
        using namespace first;
        //using namespace std; this line is used to shorten std::cout
        //problem is that there is thousands of vars in std namespace
        //and make variable name conflicts HIGHLY LIKELY
        //instead using std::cout

        std::cout << "I Love Coding";
        std::cout << "\nFirst  X : " << x;
        std::cout << "\nSecond X : " << second::x;
        return 0;
    
    }


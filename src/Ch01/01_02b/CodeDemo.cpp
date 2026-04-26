// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// NOTES: 
    // part of cpp standard library, gives text from screen and from input
    // cpp does not inforce indenting like python
    // int (returned value) main (function name) () (input values) curly brackets
    // std --> standard library, :: --> scope resolution operator, cout --> character output, object in the std library (represents terminal)
    // to show that there will be input from terminal, we have << (leftbound insertion operator, double if we want to use it consecutively) and we say what we want inputted 
    // endl --> end line (<< std::endl adds a line btwn)
    // end lines with semicolon unless a closing curly bracket
    // because function wants integer as a return, return 0, usually represents error

#include <iostream>


int main(){
    std::cout << "Hi There!!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}

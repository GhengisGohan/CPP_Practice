#include <iostream>
#include <cstdio>

/*using "std::cout" here would introduce the using declaration globally
put it inside your function to make it local... see below */

using namespace std; //use this namespace here, this is a "using directive"
                     //always use the declatration down below instead for more practice and less confusion later. 

    /*
    Things to remember: compile your code in the terminal with g++ "file_name.cpp"
                        ./a.out will run your program. you will see the output
                        in the terminal.
    */


int main() {
    puts("Hello, World! \n"); //is one way to print

    cout << "Hello World Again \n"; //or preface cout with 'std::cout' but not both. (terminal output)
    return 0; //not necessary but tells computer that nothing went wrong
}       
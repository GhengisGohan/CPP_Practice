#include <iostream>
#include <cmath>

/* 
    give fucntions names (called identifiers)
    you can have a function after the main even if you want to use it in the main you just
    have to make sure it is declared above main so the compiler knows to look for it.
    check out the difference in the loop when you don't set your result to 1.  
*/
using std::cout;
using std::cin;
using std::endl;

double myloop()
{
    int exponent;
    double result = 1, base;
    cout << "What is your base? ";
    cin >> base;
    cout << "What is your exponent? ";
    cin >> exponent;

    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return(result);
}

int  power_up()
{
 
    int user_input, power_input;
    double v;
    cout << "Pick a number! ";
    cin >> user_input;
    cout << "Pick a power! ";
    cin >> power_input;
    v = pow(user_input, power_input);
    return(v);
} 

void print_pow()
{
    double p = myloop();
    double f = power_up();
    cout << "Your number is " << f << endl;
    cout << "Your loop resulted in " << p << endl;
}

int main()
{
    print_pow();
}
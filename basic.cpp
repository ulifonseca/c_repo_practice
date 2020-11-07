#include <iostream>
#include <cmath>
#include "operations.h"

using std::cout; // using directives 
using std::endl; 

int main()
{
    cout<<"Sum : "<<sum(4,5)<<endl; //Calling
    cout<<"Power: "<<power(2,5)<<endl;//Calling
    return 0;
}

int sum(int a, int b) //Declaration
{
    return a+b;
}

double power(int base, int exponent)// Declaration 
{
    int result = 1; 
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}


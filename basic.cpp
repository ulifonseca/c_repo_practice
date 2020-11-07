#include <iostream>
#include <cmath>
#include "operations.h"

using std::cout; // using directives 
using std::endl; 

int main()
{
    cout<<"Sum : "<<sum(4,5)<<endl; //Calling
    return 0;
}

int sum(int a, int b) //Declaration
{
    return a+b;
}


#include <iostream>
#include <cmath>

 using std::cout; // using directives 
 using std::endl; 
 
int main()
{
    int base = 0; //Local variable declaration and initialization
    int exponent = 0;
    cout<<"Base: ";
    std::cin>>base;
    cout<<"Exponent: ";
    std::cin>>exponent;
    cout<<pow(base,exponent)<<endl;
    
    return 0;
}



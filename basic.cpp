#include <iostream>
#include <stdio.h>

 using std::cout; // using directives 
 using std::endl; 
 
int square(int base);
int main()
{
    int base = 0; //Local variable declaration and initialization
    int exponent = 0;
    cout<<"Base: ";
    std::cin>>base;
    cout<<square(base)<<endl;
    
    return 0;
}
int square(int base)
{
    return base*base;
}


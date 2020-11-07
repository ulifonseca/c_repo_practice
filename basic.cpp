#include <iostream>
#include <stdio.h>

 using std::cout; // using directives 
 using std::endl; 
 
int main()
{
    int slices = 0; //Local variable declaration and initialization
    int sodas = 0;
    cout<<"Number of slices of pizza: ";
    std::cin>>slices;
    cout<<"Number of sodas: ";
    std::cin>>sodas;
    cout<<slices<<" slices of pizza and "<<sodas<<" sodas."<<endl;
    
    return 0;
}
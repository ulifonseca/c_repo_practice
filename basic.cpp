#include <iostream>
#include <string>

using std::cout; // using directives 
using std::endl; 

int main()
{
    std::string name;
    getline(std::cin,name);
    cout<<name<<endl;
    
    return 0;    
}


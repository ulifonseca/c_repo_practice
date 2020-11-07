#include <iostream>
#include <string>

using std::cout; // using directives 
using std::endl; 

int main()
{
    std::string name = "Miriam Arreola";
    name.append(" Hernandez");
    name.insert(7,"Love ");
    name.erase(7,5);
    name.pop_back();
    name.pop_back();
    name.push_back('e');
    name.push_back('z');
    cout<<name<<endl;
    return 0;    
}


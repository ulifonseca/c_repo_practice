#include <iostream>
#include <string>

using std::cout; // using directives 
using std::endl; 

int main()
{
    std::string name = "Miriam Arreola";
    std::string name2 = "Ulises";
    name.append(" Hernandez");
    name.insert(7,"Love ");
    name.erase(7,5);
    name.pop_back();
    name.pop_back();
    name.push_back('e');
    name.push_back('z');
    if(name2.compare("Ulises")==0)
    {
        cout<<"Equal!"<<endl;
    }
    else
    {
        cout<<"Not equal"<<endl;
    }
    
    cout<<name<<endl;
    return 0;    
}


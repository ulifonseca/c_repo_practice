#include <iostream>
#include <string>

using std::cout; // using directives 
using std::endl; 

int main()
{
    std::string name = "Miriam";
    std::string name2;  //Initially "" declared empty
    std::string lastname = " Arreola";
    std::string completeName = name + lastname;  
    cout<<"Name and ASCII value..."<<endl;
    for (int i = 0; i <= name.length(); i++) //It includes the null character '\0' 
    {
        cout<<name[i]<<" --> "<<(int)name[i]<<endl;      
    }
    cout<<name2<<endl;
    //String concatenation
    cout<<completeName.length()<<endl;
    
    return 0;    
}


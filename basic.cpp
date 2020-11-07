#include <iostream>
#include <string>

using std::cout; // using directives 
using std::endl; 

int main()
{
    std::string name = "Miriam";
    cout<<"Name and ASCII value..."<<endl;
    for (int i = 0; i <= name.length(); i++) //It includes the null character '\0' 
    {
        cout<<name[i]<<" --> "<<(int)name[i]<<endl;      
    }
    
    return 0;    
}


#include <iostream>
#include <string>

using std::cout; // using directives 
using std::endl; 

int main()
{
    int x = 0xFF;
    int y = 255;
    cout<<x<<endl;
    cout<<std::hex<<y<<endl;
    return 0;    
}


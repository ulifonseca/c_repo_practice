#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    int age = 19;
    age > 18 ? std::cout << "Legal" : age < 18 ? std::cout << "Illegal" : std::cout << "You are 18";
    cout << endl;
    return 0;
}

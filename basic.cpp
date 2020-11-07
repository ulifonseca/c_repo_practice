#include <iostream>
#include <string>

using std::cout; // using directives
using std::endl;

int main()
{
    int age;
    bool value = true;
    cout << "Enter age: ";

    std::cin >> age;
    if (age > 18 && value)
    {
        cout << "You are above eighteen!" << endl;
    }
    else if (age < 18)
    {
        cout << "You are under eighteen!" << endl;
    }
    else
    {
        cout << "You are eighteen years old!" << endl;
    }

    return 0;
}

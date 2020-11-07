#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    int count = 5;
    int a = 0;
    int b = 0;

    cout << "For loop..." << endl;
    for (int i = 0; i < count; i++)
    {
        cout << i << endl;
    }
    cout << "While loop..." << endl;

    while (a < count)
    {
        cout << a << endl;
        a++;
    }
    cout << "Do while loop..." << endl;
    do
    {
        cout << b << endl;
        b++;
    } while (b < count);

    return 0;
}

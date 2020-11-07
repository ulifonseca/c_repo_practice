#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    int factorial = 5;

    cout << "Factorial..." << endl;
    for (int i = factorial - 1; i > 0; i--)
    {
        factorial *= i;
    }
    cout << "Factorial: " << factorial << endl;

    return 0;
}

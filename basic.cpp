#include <iostream>
#include <string>

using std::cout; // using directives
using std::endl;

int main()
{
    int day = 3;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    default:
        cout << "Not a day" << endl;
        break;
    }
    return 0;
}

#include <iostream>
#include <string>

using std::cout; // using directives
using std::endl;

int main()
{
    enum class Seasons
    {
        spring,
        summer,
        fall,
        winter
    };
    Seasons now = Seasons::winter;

    switch (now)
    {
    case Seasons::spring:
        cout << "It´s sunny" << endl;
        break;
    case Seasons::summer:
        cout << "It´s very sunny, you need to go swimming!" << endl;
        break;
    case Seasons::fall:
        cout << "It´s cold" << endl;
        break;
    case Seasons::winter:
        cout << "It´s very cold" << endl;
        break;
    default:
        cout << "Not a season" << endl;
        break;
    }
    return 0;
}

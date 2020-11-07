#include <iostream>
#include <string>

using std::cout; // using directives
using std::endl;

int main()
{
    enum seasons
    {
        spring = 1,
        summer = 10,
        fall = 100,
        winter = 1000
    };
    seasons now = spring;

    switch (now)
    {
    case spring:
        cout << "It´s sunny" << endl;
        break;
    case summer:
        cout << "It´s very sunny, you need to go swimming!" << endl;
        break;
    case fall:
        cout << "It´s cold" << endl;
        break;
    case winter:
        cout << "It´s very cold" << endl;
        break;
    default:
        cout << "Not a season" << endl;
        break;
    }
    return 0;
}

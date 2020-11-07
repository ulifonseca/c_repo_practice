#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    std::string password = "uli321";
    std::string guess;
    int count = 0;

    do
    {
        cout << "Guees the password: ";
        std::cin >> guess;
        count++;

    } while (guess != password && count < 3);
    cout << "You enter!" << endl;

    return 0;
}

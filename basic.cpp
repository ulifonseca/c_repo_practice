#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    std::string love = "Miriam Arreola Hernandez";
    for (int i = 0; i < love.size(); i++)
    {
        cout << love[i] << endl;
        if (love[i] == 'A')
        {
            cout << "Found 'A'!" << endl;
            break;
        }
    }
    cout << "Done!" << endl;

    return 0;
}

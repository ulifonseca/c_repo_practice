#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    std::string love = "Miriam Arreola Hernandez";
    for (int i = 0; i < love.size(); i++)
    {

        if (love[i] == 'A')
        {
            continue;
        }
        cout << love[i] << endl;
    }
    cout << "Done!" << endl;

    return 0;
}

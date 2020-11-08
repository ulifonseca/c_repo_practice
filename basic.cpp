#include <iostream>
#include <string>
#include <time.h>

using std::cout;
using std::endl;

void fill_array(int a[], int size, int min, int max)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = (rand() % (max - min + 1) + min);
    }
}
void display_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
}
int main()
{
    int a[5] = {};
    int option = 0;
    int size = sizeof(a) / sizeof(int);
    srand(time(NULL));

    do
    {
        cout << "\n(1) User input fill array\n(2) Random filling\n(3) Exit" << endl
             << endl
             << "Option: ";
        std::cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter " << size << " numbers:" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << "Index [" << i << "] --> ";
                if (!(std::cin >> a[i]))
                {
                    option = 3;
                }
            }
            cout << endl;
            display_array(a, size);
            break;

        case 2:
            cout << "Random filling..." << endl;
            fill_array(a, size, 90, 100);
            display_array(a, size);
            break;
        default:
            cout << "Bye" << endl;
            break;
        }

    } while (option != 3);

    return 0;
}

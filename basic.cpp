#include <iostream>
#include <string>
#include <time.h>
#include <vector>

using std::cout;
using std::endl;

void fill_vector(std::vector<int> &a, int size, int min, int max)
{
    for (int i = 0; i < size; i++)
    {
        a.push_back(rand() % (max - min + 1) + min);
    }
}
void display_vector(std::vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
}
void erase_vector(std::vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        a.pop_back();
    }
}

int main()
{
    int size = 2;
    std::vector<int> vector1;
    int option = 0;
    srand(time(NULL));
    do
    {
        int v = 0;
        cout << "Vector..." << endl;
        cout << "\n(1) User input fill vector\n(2) Random filling\n(3) Display vector\n(4) Erase vector\n(5) Exit" << endl
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
                std::cin >> v;
                vector1.push_back(v);
            }
            cout << endl;
            display_vector(vector1);
            break;

        case 2:
            cout << "Random filling..." << endl;
            fill_vector(vector1, size, 90, 100);
            display_vector(vector1);
            break;
        case 3:
            cout << "Displaying vector..." << endl;
            display_vector(vector1);
            cout << endl;
            cout << endl;
            break;
        case 4:
            cout << "Erasing vector" << endl;
            erase_vector(vector1);
            cout << "Finish." << endl;
            break;

        default:
            cout << "Bye" << endl;
            break;
        }

    } while (option != 5);

    return 0;
}

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

void display_vector(std::vector<int> &vec1)
{
    cout << "Displaying array..." << endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;
}

void push_vector(std::vector<int> &vec1, int value)
{
    vec1.push_back(value);
}

void pop_vector(std::vector<int> &vec1)
{
    vec1.pop_back();
}

int main()
{
    int option = 0;
    int value = 0;
    std::vector<int> vector1;

    do
    {
        cout << endl;
        cout << "(1)Push vector.\n(2)Pop vector\n(3)Display vector.\n(4)Clear vector\n(5)Exit.\nOption? ";
        std::cin >> option;
        switch (option)
        {
        case 1:
            cout << "Push vector..." << endl;
            cout << "Value: ";
            std::cin >> value;
            push_vector(vector1, value);
            cout << endl;
            break;
        case 2:
            cout << "Pop vector..." << endl;
            if (vector1.size() == 0)
            {
                cout << "Sorry, the vector is empty" << endl;
                break;
            }
            else
            {
                pop_vector(vector1);
                display_vector(vector1);
                cout << endl;
            }
            break;
        case 3:
            if (vector1.size() == 0)
            {
                cout << endl
                     << "<--Vector empty-->" << endl;
            }
            else
            {
                display_vector(vector1);
            }
            cout << endl;
            break;
        case 4:
            cout << "Erasing array..." << endl;
            vector1.clear();
            break;
        default:
            cout << "Try another option please!" << endl;
            break;
        }

        /* code */
    } while (option != 5);

    return 0;
}
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
}
int main()
{
    int a[5] = {};
    int size = sizeof(a) / sizeof(int);
    srand(time(NULL));
    fill_array(a, size, 5, 10);
    display_array(a, size);
    return 0;
}

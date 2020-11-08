#include <iostream>
#include <string>
#include <time.h>

using std::cout;
using std::endl;

int main()
{
    int value;
    int reps = 5;
    int min = 10;
    int max = 13;
    srand(time(NULL));
    for (int i = 0; i < reps; i++)
    {
        cout << (rand() % (max - min + 1) + min) << " ";
    }
    cout << endl;
    return 0;
}

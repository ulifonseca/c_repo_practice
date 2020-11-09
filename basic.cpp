#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "For each..." << endl;
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    for (int x : a)
    {
        cout << "Index [" << (x - 1) << "] --> " << x << endl;
    }

    return 0;
}
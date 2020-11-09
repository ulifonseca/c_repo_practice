#include <iostream>
#include <array>

using std::cout;
using std::endl;

int main()
{
    cout << "For each..." << endl;
    std::array<double, 7> array1 = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    for (double x : array1)
    {
        cout << "Index [" << (int(x) - 1) << "] --> " << x << endl;
    }

    return 0;
}
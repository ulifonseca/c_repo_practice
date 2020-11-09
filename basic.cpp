#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main()
{
    cout << "For each..." << endl;
    std::vector<double> vector1 = {1.1, 2.2, 3.3, 4.4, 5.5};
    for (double x : vector1)
    {
        cout << "Index [" << (int(x) - 1) << "] --> " << x << endl;
    }

    return 0;
}
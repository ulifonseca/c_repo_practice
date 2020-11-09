#include <iostream>
#include <array>

using std::cout;
using std::endl;

void display_array(std::array<int, 5> &data)
{
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << " " << endl;
    }
}

void fill_array(std::array<int, 5> &data)
{
    for (int i = 0; i < data.size(); i++)
    {
        data[i] = i + 1;
    }
}
int main()
{
    cout << "STL Array..." << endl;
    std::array<int, 5> stl_array = {};
    display_array(stl_array);
    fill_array(stl_array);
    display_array(stl_array);
    return 0;
}
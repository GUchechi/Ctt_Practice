#include <iostream>
using namespace std;
#include <array>

void print_array(array<int, 20> &data, int size)
{
    // for (int value : data){
    //     cout << value << endl;
    // }

    for (int i = 0; i < size; i++)
    {
        cout << data[i] << endl;
    }
}
int main()
{
    array<int, 20> data = {1, 2, 3}; // Partial initialization; remaining elements are zero-initialized

    print_array(data, 3);

    return 0;
}
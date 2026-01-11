#include <iostream>
using namespace std;

void print_array(const int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    print_array(arr, 5);

    return 0;
}
#include <iostream>
using namespace std;
#include <vector>

void print_vector(vector<int> &data)
{
    data.push_back(4); // Modifying the vector by adding an element

    for (size_t i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
}

int main()
{

    vector<int> data = {1, 2, 3};
    print_vector(data);

    return 0;
}
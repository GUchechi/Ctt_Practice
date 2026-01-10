#include <iostream>
using namespace std;
#include <array>
#include <vector>
#include <string>

int main()
{

    vector <int>data = {1, 2, 3, 4, 5, 6};

    for (int n : data)
    {
        cout << n << "\t ";
        
    }
    

        // for (int i = 0; i < 6; i++)
        // {
        //     cout << data[i] << "\t ";
        // }

        cout << endl;

        return 0;
    }
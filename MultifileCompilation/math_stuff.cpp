#include <iostream>
#include "math_utils.h"
using namespace std;

int main()
{

    cout << utilz::pow(3, 3) << endl; // 27
    cout << utilz::pow(3) << endl;    // 9 (default power is 2)

    return 0;
}
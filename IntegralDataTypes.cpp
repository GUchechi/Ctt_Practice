#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // short a;
    // int b;
    // long c;
    // long long d;

    // short <= int <= long <= long long

    // unsigned short aa;
    // unsigned int bb;
    // unsigned long cc;
    // unsigned long long dd;

    // cout << "Size of short: " << sizeof(short) << " bytes\n";
    // cout << "Size of int: " << sizeof(int) << " bytes\n";
    // cout << "Size of long: " << sizeof(long) << " bytes\n";
    // cout << "Size of long long: " << sizeof(long long) << " bytes\n";

    cout << SHRT_MAX << endl;
    cout << INT_MAX << endl;
    cout << LONG_MAX << endl;
    cout << LLONG_MAX << endl;
    cout << USHRT_MAX << endl;
    cout << UINT_MAX << endl;
    cout << ULONG_MAX << endl;
    cout << ULLONG_MAX << endl;

    return 0;
}
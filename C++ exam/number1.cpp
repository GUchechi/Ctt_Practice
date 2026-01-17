#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int main()
{
    string input;
    cout << "Enter an integer from 0 to 10: ";
    getline(cin, input);

    
    stringstream ss(input);
    long long temp; 

    if (!(ss >> temp))
    {
        cout << "Please input integer numbers only!" << endl;
        return 0;
    }


    ss >> std::ws;
    if (!ss.eof())
    {
        cout << "Please input integer numbers only!" << endl;
        return 0;
    }

  
    if (temp < std::numeric_limits<int>::min() ||
        temp > std::numeric_limits<int>::max())
    {
        cout << "Overflow problem! Please input smaller value!" << endl;
        return 0;
    }

    int x = static_cast<int>(temp);

    if (x < 0 || x > 10)
    {
        cout << "Can only process numbers from 0 to 10!" << endl;
        return 0;
    }

    // Map 0–10 to words
    const std::string words[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine", "ten"};

    cout << words[x] << endl;

    return 0;
}

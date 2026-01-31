#include <iostream>
#include <vector>
#include <algorithm> // Required for std::reverse

// Function to reverse a vector
// The '&' symbol is CRITICAL here. It means we are editing the ORIGINAL vector.
void reverseVector(std::vector<double> &vec)
{
    std::reverse(vec.begin(), vec.end());
}

int main()
{
    // 1. Initialize
    std::vector<double> data = {1, -2.5, 3, 4.1, -5};

    // 2. Print Original
    std::cout << "Original: ";
    for (double val : data)
        std::cout << val << " ";
    std::cout << std::endl;

    // 3. Reverse it
    reverseVector(data);

    // 4. Print Result
    std::cout << "Reversed: ";
    for (double val : data)
        std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
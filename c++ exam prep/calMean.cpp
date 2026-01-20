#include <iostream>
#include <vector>
#include <array>

// Function Declaration & Definition
double calculateMean(const std::vector<double> &data)
{
    if (data.empty())
    {
        return 0.0; // Safety check to avoid division by zero
    }

    double sum = 0.0;
    // Range-based for loop to sum all elements
    for (double val : data)
    {
        sum += val;
    }

    return sum / data.size();
}

#include <array>

// double mean(const std::array<int, 4> &arr)
// {
//     int sum = 0;
//     for (int x : arr)
//     {
//         sum += x;
//     }
//     return static_cast<double>(sum) / arr.size();
// }

// int main()
// {
//     int arr[] = {2, 4, 6, 8};
//     int size = 4;

//     cout << "Mean = " << mean(arr, size) << endl;
//     return 0;
// }

// double mean(const int arr[], int size)
// {
//     if (size == 0)
//         return 0.0;

//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }

//     return static_cast<double>(sum) / size;
// }

int main()
{
    std::vector<double> data = {1, -2.5, 3, 4.1, -5};

    double mean = calculateMean(data);

    std::cout << "The mean value is: " << mean << std::endl;

    return 0;
}
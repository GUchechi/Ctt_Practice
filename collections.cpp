#include <iostream>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    const int SIZE = 6;
    int guesses[SIZE];
    // int size = sizeof(guesses) / sizeof(guesses[0]);

    for (int i = 0; i < SIZE; i++)
    {
      if  (cin >> guesses[i]) {
        // Successfully read an integer
      } else {
        // Failed to read an integer
        cout << "Invalid input. Please enter integers only." << endl;
        return 1; // Exit the program with an error code
      }
    }

    print_array(guesses, SIZE);

    return 0;
}

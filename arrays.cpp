#include <iostream>
using namespace std;
#include <limits>

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    const int SIZE = 6;
    int guesses[SIZE];
    // int size = sizeof(guesses) / sizeof(guesses[0]);

    int count = 0;
    cout << "Enter " << SIZE << " integers: " << endl;

    for (int i = 0; i < SIZE; i++)
    {
      if  (cin >> guesses[i]) {
        // Successfully read an integer
        count++;
      } else {
        // Failed to read an integer
        cout << "Invalid input. Please enter integers only." << endl;
        return 1; // Exit the program with an error code
      }
    }

    print_array(guesses, count);

    cout << "You entered: " << count << " integers." << endl;
    
    cin.clear(); // Clear any error flags
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input

    return 0;

}

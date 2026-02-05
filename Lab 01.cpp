#include <iostream>
using namespace std;

int main() {
    int number[5];  // Declare an array of 5 integers
    int sum = 0, max;

    cout << "Enter 5 numbers: " << endl;

    // Input values into the array
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> number[i];
    }

    // Initialize max with the first element
    max = number[0];
    // Calculate sum and find maximum
    for (int i = 0; i < 5; i++) {
        sum += number[i];
        if (number[i] > max)
            max = number[i];
    }

    // Display results
    cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        cout << number[i] << " ";
    }

    cout << "\nSum of numbers = " << sum;
    cout << "\nMaximum number = " << max << endl;

    return 0;
}


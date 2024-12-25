#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int decimal;
    vector<int> binary;

    // cout << "Enter a decimal number: ";
    cin >> decimal;

    // Edge case: if the number is 0
    if (decimal == 0) {
        // cout << "Binary: 0" << endl;
        cout<<"0";
        return 0;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary.push_back(decimal % 2); // Store the remainder
        decimal /= 2;                 // Update the number by dividing by 2
    }

    // Reverse the binary representation
    reverse(binary.begin(), binary.end());

    // Print the binary representation
    // cout << "Binary: ";
    for (int bit : binary) {
        cout << bit;
    }
    cout << endl;

    return 0;
}
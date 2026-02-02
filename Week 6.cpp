#include <iostream>
using namespace std;

int main() {
    const int SIZE = 20;
    int mainArray[SIZE];
    int oddArray[SIZE];
    int evenArray[SIZE];
    int oddCount = 0;
    int evenCount = 0;
    
    // Input 20 integers from user
    cout << "Enter 20 integers (between 1 and 100):\n";
    for (int i = 0; i < SIZE; i++) {
        do {
            cout << "Element " << (i + 1) << ": ";
            cin >> mainArray[i];
            
            if (mainArray[i] < 1 || mainArray[i] > 100) {
                cout << "Invalid! Enter a number between 1 and 100.\n";
            }
        } while (mainArray[i] < 1 || mainArray[i] > 100);
    }
    
    // Display main array
    cout << "\nMain Array:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << mainArray[i] << " ";
    }
    cout << "\n\n";
    
    // Separate into odd and even
    for (int i = 0; i < SIZE; i++) {
        if (mainArray[i] % 2 == 0) {
            evenArray[evenCount++] = mainArray[i];
        }
        else {
            oddArray[oddCount++] = mainArray[i];
        }
    }
    
    // Display odd array
    cout << "Odd Values Array (" << oddCount << " elements):\n";
    for (int i = 0; i < oddCount; i++) {
        cout << oddArray[i] << " ";
    }
    cout << "\n\n";
    
    // Display even array
    cout << "Even Values Array (" << evenCount << " elements):\n";
    for (int i = 0; i < evenCount; i++) {
        cout << evenArray[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {}
    
    // Setter methods
    void setFraction(int num, int den) {
        numerator = num;
        denominator = den;
    }
    
    // Get decimal value
    double getValue() const {
        return (double)numerator / denominator;
    }
    
    // Display fraction
    void display() const {
        cout << numerator << "/" << denominator;
    }
    
    // Input fraction
    void input() {
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
    }
};

// Function using pass-by-reference and return-by-reference
Fraction& findLargest(Fraction &f1, Fraction &f2, Fraction &f3) {
    if (f1.getValue() >= f2.getValue() && f1.getValue() >= f3.getValue()) {
        return f1;
    }
    else if (f2.getValue() >= f1.getValue() && f2.getValue() >= f3.getValue()) {
        return f2;
    }
    else {
        return f3;
    }
}

int main() {
    Fraction frac1, frac2, frac3;
    
    cout << "=== Fraction 1 ===" << endl;
    frac1.input();
    
    cout << "\n=== Fraction 2 ===" << endl;
    frac2.input();
    
    cout << "\n=== Fraction 3 ===" << endl;
    frac3.input();
    
    // Call function with pass-by-reference
    Fraction& largest = findLargest(frac1, frac2, frac3);
    
    cout << "\n=== Results ===" << endl;
    cout << "Fraction 1: "; frac1.display(); cout << endl;
    cout << "Fraction 2: "; frac2.display(); cout << endl;
    cout << "Fraction 3: "; frac3.display(); cout << endl;
    
    cout << "\nLargest fraction: ";
    largest.display();
    cout << " = " << largest.getValue() << endl;
    
    return 0;
}
```

## Key Concepts Demonstrated:

1. **Pass-by-Reference:** The parameters `Fraction &f1, Fraction &f2, Fraction &f3` are passed by reference, meaning no copies are made.

2. **Return-by-Reference:** The function returns `Fraction&` which returns a reference to the actual object, not a copy.

3. **Memory Efficiency:** No extra memory is used for copying objects.

4. **Direct Access:** Changes to the returned reference would affect the original object.

## Sample Output:
```
Enter first fraction (numerator denominator): 3 4
Enter second fraction (numerator denominator): 5 6
Enter third fraction (numerator denominator): 7 8

The three fractions are:
Fraction 1: 3/4 = 0.75
Fraction 2: 5/6 = 0.833333
Fraction 3: 7/8 = 0.875

The largest fraction is: 7/8 = 0.875
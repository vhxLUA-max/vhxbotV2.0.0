// C++ script with syntax and logic errors

#include <iostream>
using namespace std;

// Logic error: function is supposed to return the average but divides by wrong number
double getAverage(int a, int b, int c) {
    return (a + b + c) / 2; // should be / 3
}

// Syntax error: missing return type
multiply(int x, int y) {
    return x * y;
}

int main() {
    int x = 10
    int y = 0;

    // Logic error: division by zero not guarded
    int result = x / y;
    cout << "Result: " << result << endl;

    // Syntax error: missing closing parenthesis
    cout << "Average: " << getAverage(4, 8, 10) << endl

    // Logic error: condition is always true, loop never stops
    int i = 0;
    while (i > -1) {
        cout << i << endl;
        i++;
    }

    // Syntax error: wrong comparison operator in if
    if (x = 5) {
        cout << "x is 5" << endl;
    }

    // Logic error: off-by-one, misses last element
    int arr[] = {1, 2, 3, 4, 5};
    for (int j = 0; j < 4; j++) {
        cout << arr[j] << endl;
    }

    return 0
}

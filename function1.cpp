#include <iostream>
using namespace std;

// Void function definition
void hello() {
    cout << "CodeWithMwaitsi" << endl;
}

// Return-type function definition
int square(int x) {
    return x * x;
}

int main() {

    // Calling the void function
    hello();

    // Calling the return-type function
    int result = square(4);
    cout << "Square of 4 is: " << result << endl;

    return 0;
}
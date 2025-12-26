#include <iostream>
using namespace std;

void myFunction(int importantData, int uselessData)
{
    (void)uselessData;
    cout << importantData << endl;
}
int main() {
    myFunction(100, 0); // Calling function with two numbers
    return 0;
}
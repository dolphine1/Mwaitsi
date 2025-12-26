#include <iostream>
using namespace std;

int main()
{
    int secretCode = 1234;

    void* ptr = &secretCode;
    int* intPtr = (int*)ptr;

    cout << *intPtr << endl;
    return 0;
}

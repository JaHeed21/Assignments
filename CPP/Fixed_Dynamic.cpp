#include <iostream>
using namespace std;

int main() {
    int fixedArray[5] = {0};  // Size fixed at compile time

    cout << "Fixed Dynamic Array: ";
    for (int i = 0; i < 5; i++)
        cout << fixedArray[i] << " ";
    cout << endl;

    fixedArray[2] = 10;
    cout << "After updating index 2: ";
    for (int i = 0; i < 5; i++)
        cout << fixedArray[i] << " ";
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int* heapArray = new int[size];  // Allocated at runtime
    for (int i = 0; i < size; i++)
        heapArray[i] = 0;

    heapArray[1] = 25;
    heapArray[3] = 50;

    cout << "Fixed Heap Dynamic Array: ";
    for (int i = 0; i < size; i++)
        cout << heapArray[i] << " ";
    cout << endl;

    delete[] heapArray;  // Free heap memory
    return 0;
}

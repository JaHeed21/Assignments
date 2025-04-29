#include <iostream>
using namespace std;

void createList(int size) {
    int localList[size]; 

    for (int i = 0; i < size; i++)
        localList[i] = i;

    cout << "Stack Dynamic List: ";
    for (int i = 0; i < size; i++)
        cout << localList[i] << " ";
    cout << endl;
}

int main() {
    createList(5);
    createList(8);
    return 0;
}

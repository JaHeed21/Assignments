#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> dynamicList;  // Fully dynamic list

    dynamicList.push_back(5);
    dynamicList.push_back(10);

    cout << "Heap Dynamic List: ";
    for (int val : dynamicList)
        cout << val << " ";
    cout << endl;

    dynamicList.pop_back();
    dynamicList.push_back(20);

    cout << "Updated List: ";
    for (int val : dynamicList)
        cout << val << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.push_back(5);
    l.push_back(20);
    l.push_back(2);
    l.push_back(5);
    cout << "---------------- " << endl;
    cout << "Size of l is " << l.size() << endl;

    // Display the contents
    // for (int i = 0; i < l.size(); i++) {
    //     cout << l[i] << endl;
    // } INDEX IS NOT VALID FOR LISTS

    // Correct way --> use the designated iterator
    list<int>::iterator it;
    cout << "---------------- " << endl;
    cout << "List of elements: " << endl;
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }
    // Alternative (but hides complexity of the coding)
    cout << "---------------- " << endl;
    cout << "List of elements: " << endl;
    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }
    cout << "---------------- " << endl;
    cout << "List of elements: " << endl;
    // Other way, using for-range loop
    for (int x : l) {
        cout << x << endl;
    }
    return 0;
}
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    l.push_back(5);
    l.push_back(20);
    l.push_back(5);
    l.push_back(5);
    list<int>::iterator it;
    
    cout << "---------------- " << endl;
    cout << "List of elements before removing duplicates: " << endl;
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }

    l.unique();
    cout << "List of elements using only l.unique(): " << endl;
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }
    l.push_back(5); // Adding the removed element...

    l.sort(); // Sort the elements so duplicates are next to each other
    l.unique(); // Remove all duplicates

    cout << "---------------- " << endl;
    cout << "List of elements: " << endl;
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}
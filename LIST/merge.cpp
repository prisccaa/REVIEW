#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1;
    l1.push_back(5);    // 1
    l1.push_back(20);   // 4
    l1.push_back(2);    // 5
    l1.push_back(7);    // 6
    list<int> l2;   
    l2.push_back(9);    // 2
    l2.push_back(3);    // 3
    l2.push_back(221);  // 7
    l2.push_back(6);    // 8
    cout << "---------------- " << endl;
    cout << "Size of list 1 before merging: " << l1.size() << endl;
    cout << "List of elements of list 1 before merging: " << endl;
    list<int>::iterator it;
    for (it = l1.begin(); it != l1.end(); it++) {
        cout << *it << endl;
    }
    l1.merge(l2);
    cout << "Size of list 1 after merging: " << l1.size() << endl;
    cout << "List of elements of list 1 after merging: " << endl;
    for (it = l1.begin(); it != l1.end(); it++) {
        cout << *it << endl;
    }
    // The output is as such because merge does its own sorting
    // It compares each "first" element of each list and whichever is smallest, it puts into the "new" list (merged one)
    return 0;
}
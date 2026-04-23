#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    cout << "---------------- " << endl;
    cout <<  "List of elements in the list before reversing: " << endl;
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }
    l.reverse();
    cout << "---------------- " << endl;
    cout <<  "List of elements in the list after reversing: " << endl;
    for (it = l.begin(); it != l.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}
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
    cout <<  "List of elements in the list before removing(5): " << endl;
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++){
        cout << *it << endl;
    }
    cout << "Size of list before removing: " << l.size() << endl;
    l.remove(5);
    cout <<  "List of elements in the list after removing(5): " << endl;
    for (it = l.begin(); it != l.end(); it++){
        cout << *it << endl;
    }
    cout << "Size of list after removing: " << l.size() << endl;
    return 0;
}
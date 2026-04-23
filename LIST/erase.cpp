#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    l.push_back(5);
    l.push_back(20);
    l.push_back(2);
    l.push_back(5);
    list<int>::iterator it;
    cout << "---------------- " << endl;
    cout <<  "List of elements in the list before erasing: " << endl;
    for (it = l.begin(); it != l.end(); it++){
        cout << *it << endl;
    }
    cout << "Size before erasing: " << l.size() << endl;
    it = l.begin(); // INITIALIZED
    for(int i = 0; i < 2; i++) {
        it++; 
    }
    l.erase(it);
    cout << "---------------- " << endl;
    cout <<  "List of elements in the list after erasing: " << endl;
    for (it = l.begin(); it != l.end(); it++){
        cout << *it << endl;
    }
    cout << "Size after erasing: " << l.size() << endl;
    return 0;
}
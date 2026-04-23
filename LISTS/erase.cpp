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
    
    list<int>::iterator it = l.begin(); // INITIALIZED
    for(int i = 0; i < 2; i++) {
        it++; 
    }
    l.erase(it);
    cout <<  "List of elements in the list: " << endl;
    for (it = l.begin(); it != l.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
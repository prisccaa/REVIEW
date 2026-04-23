#include <iostream>
#include <set>
using namespace std;

int main () {
    // INSERT
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    cout << "---------------- " << endl;
    cout <<  "List of elements in the set before erasing: " << endl;
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    // ERASE
    s.erase(2);
    cout << "---------------- " << endl;
    cout <<  "List of elements in the set after erasing: " << endl;
    for (it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    // FIND
    cout << endl << "Element to be found: " << *s.find(3) << endl;
    // COUNT
    cout << "Is the integer 3 found in the set? (1 if yes, 0 if no) --> " << s.count(3) << endl;
    cout << "Is the integer 5 found in the set? (1 if yes, 0 if no) --> " << s.count(5) << endl;
    // LOWER BOUND
    cout << "Values greater or equal to 3 --> ";
    cout << *s.lower_bound(3) << endl;
    cout << *s.lower_bound(3) << endl;
    cout << "Values greater or equal to 4 --> ";
    cout << *s.lower_bound(3) << endl; 
    // UPPER BOUND
    cout << "Values greater to 4 --> ";
    cout << *s.upper_bound(4) << endl;
    return 0;
}
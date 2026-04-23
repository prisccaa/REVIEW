#include <iostream>
#include <map>
using namespace std;

int main () {
    // INSERT
    map<int, int> m; // FORMAT <key, value>
    m.insert(pair<int, int>(1, 4)); 
    m.insert(pair<int, int>(2, 3));
    m.insert(pair<int, int>(3, 2));
    m.insert(pair<int, int>(4, 1));

    cout << "---------------- " << endl;
    cout <<  "List of elements in the set before erasing: " << endl;
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->second << " "; // Printing only value
    }
    // ERASE
    m.erase(2); // Should remove 3
    cout << "---------------- " << endl;
    cout <<  "List of elements in the set after erasing: " << endl;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->second << " ";
    }
    // FIND
    cout << endl << "Element to be found: " << m.find(3)->second << endl;
    // COUNT for keys
    cout << "Is the integer 3 found in the set? (1 if yes, 0 if no) --> " << m.count(3) << endl;
    cout << "Is the integer 5 found in the set? (1 if yes, 0 if no) --> " << m.count(5) << endl;
    // COUNT for values
    bool found = false;
    for (auto& pair : m) {
        if (pair.second == 3) { found = true; break; }
    }
    for (it = m.begin(); it != m.end(); it++) {
        if (it->second = 3) {
            cout << "Value found." << endl;
        }
    }
    // LOWER BOUND
    cout << "Values greater or equal to 3 --> ";
    cout << m.lower_bound(3)->second << endl;
    cout << m.lower_bound(3)->second << endl;
    cout << "Values greater or equal to 4 --> ";
    cout << m.lower_bound(3)->second << endl; 
    // UPPER BOUND
    cout << "Values greater to 4 --> ";
    cout << m.upper_bound(4)->second << endl;
    return 0;
}
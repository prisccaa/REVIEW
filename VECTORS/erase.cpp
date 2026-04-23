#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 10; i <= 50; i += 10){
        v.push_back(i);
    }
    cout << "---------------- " << endl;  
    cout << "List of elements before erasing: " << endl;
    for (int x : v){
        cout << x << endl;
    } 
    vector<int>::iterator it = v.begin();
    v.erase(it + 2);
    cout << "---------------- " << endl;    
    cout << "List of elements after erasing: (30 should be removed)" << endl;
    for (int x : v){
        cout << x << endl;
    } 
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm> // YOU NEED THIS TO USE REMOVE WITH VECTORS
using namespace std;

int main() {
    vector<int> v;
    for (int i = 10; i <= 50; i += 10){
        v.push_back(i);
    }
    v.push_back(50); // Just to add a duplicate value
    cout << "---------------- " << endl;  
    cout << "List of elements before removing: " << endl;
    for (int x : v){
        cout << x << endl;
    }  
    cout << "Size of vector before removing/erasing: " << v.size() << endl;
    v.erase(remove(v.begin(), v.end(), 50), v.end());
    cout << "---------------- " << endl;    
    cout << "List of elements after removing: (30 should be removed)" << endl;
    for (int x : v){
        cout << x << endl;
    } 
    cout << "Size of vector before removing/erasing: " << v.size() << endl;
    return 0;
}


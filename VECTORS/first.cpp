#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 10; i <= 50; i += 10){
        v.push_back(i);
    }
    cout << "---------------- " << endl;
    cout << "List of elements: " << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    // You could also just use these methods of printing...
    cout << "---------------- " << endl;
    cout << "List of elements: " << endl;
    for (int x : v){
        cout << x << endl;
    } 
    // Or
    cout << "---------------- " << endl;
    cout << "List of elements: " << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    
    return 0;
}
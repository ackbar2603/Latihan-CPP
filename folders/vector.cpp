#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6); // Add an element to the end of the vector
    cout << v[0] << endl; // Access the first element
    return 0;
}
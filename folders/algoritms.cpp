#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers = {5, 2, 1, 3, 4};
    sort(numbers.begin(), numbers.end()); // Sort the vector in ascending order
    for (int i: numbers) {
        cout << i << " "; // Print each element in the sorted vector
    }
    return 0;
}
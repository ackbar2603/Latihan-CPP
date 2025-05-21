#include <iostream>
#include <string>

using namespace std;

int main(){
    int a = 10, b = 20, c = 30;
    int max;

    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else {
        max = c;
    }

    cout << "Nilai maksimum adalah: " << max << endl;

    return 0;
}
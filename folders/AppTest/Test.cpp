#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Angka paling besar adalah: " << a;
    if (b >= a && b >= c)
        cout << "Angka paling besar adalah: " << b;
    if (c >= a && c >= b)
        cout << "Angka paling besar adalah: " << b;
    return 0;

}
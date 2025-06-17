#include <iostream>
using namespace std;

int main(){

    int nilai;
    cout << "masukan nilai: ";
    cin >> nilai;

    for (int i = nilai; i >= 0; i--)
    {
        cout << "Perulangan ke-" << i << endl;
    }

    return 0;
    

}
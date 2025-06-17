#include <iostream>
using namespace std;

int main(){

    int nilai;

    cout << "Masukan nilai: ";
    cin >> nilai;

    for (int i = 0; i <= nilai; i++)
    {
        cout << "perulangan ke-" << i << endl;
    }
    
    return 0;

}
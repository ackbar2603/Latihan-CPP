#include <iostream>
#include <string>
using namespace std;

int main(){

    int kolom, baris;

    cout << "Masukan jumlah baris: ";
    cin >> baris;
    cout << "Masukan jumlah kolom: ";
    cin >> kolom;

    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            cout << "$ ";
        }
        cout << endl;
    }
    

    return 0;

}
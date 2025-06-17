#include <iostream>
#include <string>
using namespace std;

int main(){

    int baris, kolom, serong;

    cout << "Masukan nilai baris: ";
    cin >> baris;
    cout << "Masukan jumlah kolom: ";
    cin >> kolom;
    cout << "Masukan jumlah serong: ";
    cin >> serong;

    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            for (int k = 1; k < serong; k++)
            {
                cout << "$ ";
            }
            
            cout << endl;
        }
        
        cout << endl;
    }
    

    return 0;

}
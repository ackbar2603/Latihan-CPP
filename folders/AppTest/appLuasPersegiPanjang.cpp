#include <iostream>
using namespace std;

int main(){
    //deklarasi variabel
    float panjang, lebar, luas;

    //Welcome messages.
    cout <<"================================"<< endl;
    cout <<"==Aplikasi Luas Persegi Panjang=="<< endl;
    cout <<"================================"<< endl;

    //input panjang
    cout << "masukkan Panjang: ";
    cin >> panjang;

    //Input lebar
    cout << "masukan Lebar: ";
    cin >> lebar;

    //menghitung luas persegi panjang
    luas = panjang * lebar;

    //Output program untuk menghasilkan data dan menampilkan data

    cout <<"================================"<< endl;
    cout <<"Hasil dari luas adalah: "<< luas << endl;
    cout <<"================================"<< endl;

    return 0;

}
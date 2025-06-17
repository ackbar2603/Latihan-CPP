#include <iostream>
#include <string>
using namespace std;

int luasPersegiPanjang(int p, int l){
    return p * l;
}

int luasPersegi(int s){
    return s * s;
}

int main(){

    int sisi, panjang, lebar;

    //Input data persegi di sini
    cout << "=== Luas Persegi ===" << endl;
    cout << "Masukan sisi persegi: ";
    cin >> sisi;

    cout << "=== Luas Persegi Panjang ===" << endl;
    cout << "Masukan panjang: ";
    cin >> panjang;
    cout << "Masukan lebar: ";
    cin >> lebar;

    //menampilkan data
    cout << " === Hasil persegi ===" << endl;
    cout << "Hasil: " << sisi << " X " << sisi << " = " << luasPersegi(sisi) << endl;

    cout << "=== Hasil Persegi Panjang ===" << endl;
    cout << "Hasilnya: " << panjang << " X " << lebar << " = " << luasPersegiPanjang(panjang, lebar);

    return 0;
}
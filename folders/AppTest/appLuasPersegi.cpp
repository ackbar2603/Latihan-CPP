#include <iostream>
using namespace std;

int main(){

    //Deklarasi variabel
    float sisi, luas;

    //Welcome messages.
    cout <<"================================"<< endl;
    cout <<"==Aplikasi Luas Persegi=="<< endl;
    cout <<"================================"<< endl;

    //Masukan luas persegi
    cout << "Masukan Luas Persegi: ";
    cin >> sisi;

    //Menghitung luas persegi
    luas = sisi * sisi;

    //Menampilkan data output.
    cout <<"================================"<< endl;
    cout <<"Hasil dari luas persegi adalah: "<< luas << endl;
    cout <<"================================"<< endl;

    return 0;
}

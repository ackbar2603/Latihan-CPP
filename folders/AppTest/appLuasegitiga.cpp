#include <iostream>
using namespace std;

int main(){

    //Mendeklarasi variabel.
    float luas, alas, tinggi;

    //Welcome messages.
    cout <<"================================"<< endl;
    cout <<"==Aplikasi Luas Segitiga=="<< endl;
    cout <<"================================"<< endl;

    //Input alas.
    cout << "Masukan alas segitiga: ";
    cin >> alas;

    //Input tinggi.
    cout << "Masukan tinggi segitiga: ";
    cin >> tinggi;

    //Hasil luas segitia.
    luas = alas * tinggi /2;

    //Output dari luas segitiga
    cout <<"================================"<< endl;
    cout <<"Hasil dari luas segitiga adalah: "<< luas << endl;
    cout <<"================================"<< endl;

    return 0;
}
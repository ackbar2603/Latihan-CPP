#include <iostream>
#include <string>

using namespace std;

int main(){

    //Mendeklarasi variable.
    string nama, pekerjaan, tempatLahir, tanggalLahir, agama, hobi;

    int usia;

    //Welcome messages.
    cout <<"================================"<< endl;
    cout <<"=========Aplikasi biodata======="<< endl;
    cout <<"================================"<< endl;
    cout <<"=====Masukan data diri Anda====="<< endl;

    //Input data
    cout << "Masukan nama Anda: ";
    getline(cin, nama);
    cout << "Masukan tempat lahir Anda: ";
    getline(cin, tempatLahir);
    cout << "Masukan tanggal lahir: ";
    getline(cin, tanggalLahir);
    cout << "Masukan agama: ";
    getline(cin, agama);
    cout << "Masukan hobi: ";
    getline(cin, hobi);
    cout << "Masukan usia: ";
    cin >> usia;

    //Menampilkan data output.
    cout <<"==========Love Cikolll=========="<< endl;
    cout <<"================================"<< endl;
    cout <<"========Menampilkan Data========"<< endl;
    cout <<"================================"<< endl;
    cout <<"Nama: "<< nama << endl;
    cout <<"Tempat Lahir: "<< tempatLahir << endl;
    cout <<"Tanggal Lahir: "<< tanggalLahir << endl;
    cout <<"Agama: "<< agama << endl;
    cout <<"Hobi: " << hobi << endl;
    cout <<"Usia: " << usia << endl;
    cout <<"========Menampilkan Data========"<< endl;
    cout <<"================================"<< endl;

    return 0;
}
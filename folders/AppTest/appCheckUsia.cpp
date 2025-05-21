#include <iostream>

using namespace std;

int main(){
    
    //Deklarasi tipe data
    int usia;

    //Input usia
    cout << "Masukan usia Anda: ";
    cin >> usia;

    //if else operation
    if (usia >= 0 && usia < 14)
    {
       cout << usia << "  Usia ini merupakan usia anak-anak" << endl;
    }
    else if (usia >= 15 && usia < 20)
    {
        cout << usia << " Usia ini merupakan usia remaja" << endl;
    }
    else if (usia >= 21 && usia < 27)
    {
        cout << usia << " Usia ini merupakan usia dewasa muda" << endl;
    }
    else if (usia >= 28 && usia < 43)
    {
        cout << usia << " Usia ini merupakan usia dewasa" << endl;
    }
    else if (usia >= 44 && usia < 59)
    {
        cout << usia << " Usia ini merupakan usia paruh baya" << endl;
    }
    else if (usia >= 60 && usia < 75)
    {
        cout << usia << " Usia ini merupakan usia pikun" << endl;
    }
    else
    {
        cout << usia << " Probably already died" << endl;
    }
    
    return 0;

}
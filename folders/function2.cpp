#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    return a + b;
}

int kurang(int a, int b)
{
    return a - b;
}

int main()
{
    int hasil = kurang(10, 5);

    cout << "Hasil dari adalah " << hasil << endl;
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

//Penjumlahan
void addition(int a, int b){
    int sum = a + b;
    cout << "Hasil penjumlahan dari " << a << " + " << b << " adalah " << sum << endl;
}

//Pengurangan
void subtraction(int a, int b){
    int sub = a - b;
    cout << "hasil pengurangan dari " << a << " - " << b << " adalah " << sub << endl;
}

//Perkalian
void multiplication(int a, int b){
    int mul = a * b;
    cout << "hasil perkalian dari " << a << " x " << b << " adalah " << mul << endl;
}

//Pembagian
void division(int a, int b){
    int div = a / b;
    cout << "hasil pembagian dari " << a << " / " << b << " adalah " << div << endl;
}

int main(){
    int a = 20, b = 10;
    addition(a, b);
    subtraction(a, b);
    multiplication(a, b);
    division(a, b);
    return 0;
}

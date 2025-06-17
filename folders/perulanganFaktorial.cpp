#include <iostream>
using namespace std;

int main(){

    int nilai, faktorial = 1;

    cout << "Masukan nilai: ";
    cin >> nilai;

    cout << "Nilai dari: " << nilai << " adalah: ";

    for (int i = nilai; i >= 1; i--)
    {
        faktorial = faktorial * i;
    }
    
    cout << faktorial << endl;

    return 0;
    

}
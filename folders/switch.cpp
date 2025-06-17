#include <iostream>

using namespace std;

int main(){

    //Inisialisasi data dan variabel.
    int number;

    //input data
    cout << "Please, choose number between 1-5: ";
    cin >> number;

    switch (number)
    {
        //case number 1
        case 1:
            cout << "user pick number 1" << endl;
        break;
        //case number 2
        case 2:
            cout << "user pick number 2" << endl;
        break;
        //user pick number 3
        case 3:
            cout << "user pick number 3" << endl;
        break;
        //user pick number 4
        case 4:
            cout << "user pick number 4" << endl;
        break;
        //user pick number 5
        case 5:
            cout << "user pick number 5" << endl;
        break;
        //Default
        default:
            cout << "user did not pick any numbers" << endl;
            cout << "or the number is just not available" << endl;
        break;
    }
    
    return 0;

}
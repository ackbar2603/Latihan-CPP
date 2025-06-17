#include <iostream>

using namespace std;

int main(){

    //Initisialisasi tipe data
    int number;

    //input data
    cout << "Input your number from 1 to 5: ";
    cin >> number;

    if (number == 1)
    {
        cout << "User input number 1" << endl;
    }
    else if (number == 2)
    {
       cout << "user input number 2" << endl;
    }
    else if (number == 3)
    {
        cout << "user input number 3" << endl;
    }
    else if (number == 4)
    {
        cout << "user input number 4" << endl;
    }
    else if (number == 5)
    {
        cout << "user input number 5" << endl;
    }
    else
    {
        cout << "the number is not on the list" << endl;
        cout << "or maybe user did not input any numbers" << endl;
    }

    return 0;

}
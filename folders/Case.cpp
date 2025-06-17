#include <iostream>
using namespace std;

int main(){

    int number = 2;

    switch (number)
    {
        case 1:
        cout << "you select number 1";
        break;

        case 2:
        cout << "You select number 2";
        break;
    
        default:
        cout << "you select nothing";
        break;
    }

    return 0;
}
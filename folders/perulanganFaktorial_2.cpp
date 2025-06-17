#include <iostream>
#include <string>
using namespace std;

int main(){
    int number, factorials = 1;

    cout << "Input the number: " << endl;
    cin >> number;

    cout << "factorial from: " << number << " is: " << endl;

    for (int i = number; i > 1; i--)
    {
        factorials = factorials * i;
    }

    cout << factorials << endl;

    return 0;
    
}
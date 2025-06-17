#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[6] = {"Ikmal", "Salsa", "Davin", "Adell", "Farhan", "Syehan"};

    for (int i = 5; i > 0; i--)
    {
        cout << names[i] << endl;
    }

    return 0;
    
}
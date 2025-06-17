#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    //Initialization data and variable
    string name;

    //Input name
    cout << "==================" << endl;
    cout << "Hello welcome to the club" << endl;
    cout << "What si your name?: ";
    getline(cin, name);

    // Convert input to lowercase
    transform(name.begin(), name.end(), name.begin(), ::tolower);

    //The decision
    if (name == "ikmal")
    {
        cout << "Oh hello boss, just get in sir" << endl;
    }
    else if (name == "chaves")
    {
        cout << "Wow Chaves hold on, take this before get in" << endl;
    }
    else if (name == "shakira")
    {
        cout << "nope, get away" << endl;
    }  
    else
    {
        cout << "welcome strangers, just dont make any chaotic stuff" << endl;
    }
    
    return 0;

}
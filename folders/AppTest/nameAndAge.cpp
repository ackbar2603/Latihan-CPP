#include <iostream>
#include <string>
using namespace std;

void inputName(){
    int age;
    string name;
    cout << "Hello there how are you?"<< endl;

    cout << "Hmm what is your name?" << endl;
    getline(cin, name); // input name but full
    cout << "and, how old are you? : " << endl;
    cin >> age; // input usia
    

    cout << "hi there " << name << endl;
    cout << "Interesting you are: " << age << endl;
}

// void inputAge(){
//     int age;
//     cout << "How old you are?: " << endl;
//     cin >> age; // input age
    
//     cout << "So you are: " << age << endl;
// }

int main(){
    inputName();
    //inputAge();

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    
    //decleration of function
    int age;

    //Inserting the age.
    cout << "Berapa usia anda? :" << endl;
    cin >> age;

    if (age > 18)
    {
        cout << "Usia: " << age << " sudah memasuki usia dewasa" << endl;
    }
    else
    {
        cout << "Usia: " << age << " masih remaja" << endl;
    }

    return 0;



}
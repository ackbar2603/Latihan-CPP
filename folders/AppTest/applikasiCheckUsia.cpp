#include <iostream>
using namespace std;

int main(){

    //Deklarasi tipedata
    int age;

    //input data
    cout << "enter your age?: ";
    cin >> age;

    if (age  >= 0 && age < 8)
    {
        cout << age << " Years old is still categorized as children" << endl;
    }
    else if (age >= 9 && age < 18)
    {
        cout << age << " years old is categorized as children but a little old" << endl;
    }
    else if (age >= 19 && age < 25)
    {
        cout << age << " Years old is categorized as young adult" << endl;
    }
    else if (age >= 26 && age < 35)
    {
        cout << age << " Years old is categorized as senior adult with stable job" << endl;
    }
    else if (age >= 36 && age < 55)
    {
        cout << age << " Years old, most of them are having families and job ready to retired" << endl;
    }
    else
    {
        cout << age << " Years old is retired and having no life" << endl;
    }

    return 0;
    

}
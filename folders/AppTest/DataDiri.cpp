#include <iostream>
#include <string>

using namespace std;

int main(){

    //Declarate the function and datatype.
    string name, job, hobbies, birthPlace, birthDate, bodyheight;
    int age;

    //Input data
    cout << "==================================" << endl;
    cout << "============Input Data===========" << endl;
    cout << "==================================" << endl;

    //input data
    cout << "What is your name?: ";
    getline(cin, name);
    cout << "What is your job?: ";
    getline(cin, job);
    cout << "Where is your birth place?: ";
    getline(cin, birthPlace);
    cout << "What is yout birth date?: ";
    getline(cin, birthDate);
    cout << "what is your hobbies?: ";
    getline(cin, hobbies);
    cout << "What is your age?: ";
    cin >> age;


    //Show data
    cout << "==================================" << endl;
    cout << "===========Showing data============" << endl;
    cout << "==================================" << endl;
    cout << "Your name is: " << name << endl;
    cout << "Your job is: " << job << endl;
    cout << "your age is: " << age << endl;
    cout << "Your birth place is: " << birthPlace << endl;
    cout << "your Birth date is: " << birthDate << endl;
    cout << "Your hobbies is: " << hobbies << endl;
    cout << "==================================" << endl;

    return 0;

}
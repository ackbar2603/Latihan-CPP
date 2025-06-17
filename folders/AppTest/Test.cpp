#include <iostream>
#include <string>
using namespace std;

void Hello(string name, int age){

    cout << "Hello there " << name << endl;
    cout << "So, you are " << age << endl;

}

int main(){
    Hello("Ikmal", 21);
    Hello("Sekar", 20);
    
    return 0;
}
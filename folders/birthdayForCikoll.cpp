#include <iostream>
#include <string>
using namespace std;

void happy(){
    std::cout << "Happy Birthay for" << std::endl;
}

void name(){
    std::cout << "Sekar Aulia Ayuri" << std::endl;
}

void usia(){
    std::cout << "Cikoll sekarang umurnyaa" << std::endl;
}

void date(){
    std::cout << "21 Years Old 5 April 2004" << std::endl;
}

void whatis(){
    std::cout << "SEKAR IS FOR: " << std::endl;
}

void whyfor(){
    string why[5] = {"S = Syantik", "E = Eimutt", "K = Kereenn", "A = Asixx", "R = Ramah"};
    for (int i = 0; i < 5; i++)
    {
        std::cout << why[i] << std::endl;
    }
}

void mal(){
    std::cout << "Love you from Ikmal Akbar" << std::endl;
}

int main(){
    happy();
    name();
    usia();
    date();
    whatis();
    whyfor();
    mal();
    return 0;
}
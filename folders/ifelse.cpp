#include <iostream>

int main(){
    int a = 40;
    int b = 20;

    int max;

    if( a > b){
        max = a;
    } else {
        max = b;
    }

    std::cout << "Nilai maximum adalah: " << max << std::endl;
    return 0;
}
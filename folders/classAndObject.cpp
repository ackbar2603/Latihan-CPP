#include <iostream>


void pernjumlahan(){
    int num1 = 20;
    int num2 = 30;

    int sum;


    sum = num1 + num2;

    std::cout << "menampilkan hasil dari " << num1 << " + "
    << num2  << " adalah " << sum << std::endl;
}

void pengurangan(){
    int num3 = 50;
    int num4 = 30;

    int sumMin;

    sumMin = num3 - num4;

    std::cout << "menampilkan pengurangan hasil dari " << num3 << " - "
    << num4  << " adalah " << sumMin << std::endl;
}

void perkalian(){
    int num5 = 5;
    int num6 = 6;

    int sumMul;

    sumMul = num5 * num6;

    std::cout << "menampilkan perkalian hasil dari " << num5 << " x "
    << num6  << " adalah " << sumMul << std::endl;
}

void pembagian(){
    int num7 = 10;
    int num8 = 2;

    int sumPem;

    sumPem = num7 / num8;

    std::cout << "menampilkan pembagian hasil dari " << num7 << " / "
    << num8  << " adalah " << sumPem << std::endl;

}

void perkalianTambah(){
    int num9 = 10;
    int num10 = 5;
    int num11 = 5;

    int sumSerTam;

    sumSerTam = num11 * num9 + num10;

    std::cout << "menampilkan pertambahan dan perkalian dari " << num9 << " + "
    << num10  << " x " << num11 << " adalah " << sumSerTam << std::endl;
}

int main(){
    perkalianTambah();
    return 0;
}    
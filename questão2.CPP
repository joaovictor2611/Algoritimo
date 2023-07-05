//2. Faça um programa que leia uma string e imprima as quatro primeiras letras dela.

//João victor. If23 

#include <iostream>

#include <string>



int main() {

     std::string inputString;

     std::cout << "escreva um string: ";

     std::cin >> inputString;



    if (inputString.length() >= 4) {

       std::string fourLetters = inputString.substr(0, 4);

       std::cout << "As primeiras quatro letras da string são: " << fourLetters << std::endl;

    } else {

    std::cout << "A string não tem pelo menos quatro letras." << std::endl;

    }



    return 0;

}

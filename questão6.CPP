//06. Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui. 

//João victor. If23.

#include <iostream>

#include <string>



using namespace std;



int main() {

    string palavra;

    cout << "Digite uma palavra: ";

    getline(cin, palavra);



    int countVogais = 0;

    for (char b : palavra) {

        if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u') {

            countVogais++;

        }

    }



    char caractereSubstituto;

    cout << "Digite um caractere para substituir as vogais: ";

    cin >> caractereSubstituto;



    for (char& c : palavra) {

        if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u') {

            c = caractereSubstituto;

        }

    }



    cout << "Nova string: " << palavra << endl;

    cout << "Numero de vogais: " << countVogais << endl;



    return 0;

}





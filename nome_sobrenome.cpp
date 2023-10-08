// Nome e sobrenome
#include <iostream>
# define TAM 20

using namespace std;

// Funcao Principal
int main()

{
    char str1 [TAM]; // Definiçao String_1
    char str2 [TAM]; // Definiçao String_2
    
    cout << "Digite seu primeiro nome: "; // Impressao na tela
    cin.getline (str1, TAM); // Entrada com espaços
    
    cout << "Digite seu sobrenome: "; // Impressao na tela 
    cin.getline (str2, TAM); // Entrada com espaços 
    cout << "\nSeu nome é: " << str1 << " " << str2; // Impressao de Resultado na tela
    return 0;
    }

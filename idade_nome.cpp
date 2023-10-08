//Idade e Nome completo
#include <iostream>
#define MAX 100
using namespace std;

// Funcao principal
int main () 
    {
        
    int num; // declarando a variavel do tipo inteiro
    
    char nome [MAX]; // declarando uma string nome
    cout << "Digite sua idade 'somente numeros!': "; // mensagem na tela 
    cin >> num; // entrada numero inteiro
    cin.ignore(); // comando para ignorar os espacos em branco 
    cout << "Digite seu nome completo: "; // mensagem na tela 
    cin.getline (nome, MAX); // emtrada da frase para imprimir na tela
    cout << "Numero: "<< num << "\n" << "Nome completo: "<< nome; // impressao da var int e da string nome
    
    return 0;
    }

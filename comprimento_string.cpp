// calculando o comprimento de string
#include <iostream> 
#include <cstring>
#define MAX 100
using namespace std;



// Funcao principal 
   int main () 
        {
            char str1[MAX]; // declarando string_1
            char str2 [MAX]; // declarando string_2
            cin.getline(str1, MAX); // recebendo string_1
            cin.getline(str2, MAX); // recebendo string_2 
            int len1 = strlen (str1); // calculando comprimento da string_1
            int len2 = strlen (str2); // calculando comprimento da string_2
            cout << "Tamanhos: " <<"\nString_1: "<< len1 << " caracteres"<< "\nString_2: " <<    len2 << " caracteres"; // impressao dos resultados na tela
              return 0;
            
        }

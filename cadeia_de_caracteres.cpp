// Cadeia de caracteres
#include <iostream>
#define MAX 100
using namespace std;


// Funcao principal
int main ()

{
// Definiçao da string    
char str[MAX];

// Mensagem inicial 
cout << "digite alguma coisa: " <<    endl;

// Armazena espaco
cin.getline (str, MAX);

// Mensagem final
cout << "\n" << "Voce digitou: " << str << endl;


return 0;
}


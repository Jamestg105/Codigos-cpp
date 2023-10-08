// laço de repeticao multiplicador por 2
#include <iostream>
#define MAX 10
using namespace std;
int i; // declarando var int
int j; // declarando var int 

// Funcao principal
 int main ()
 {
  cin >> i; // entrada var int inicial 
  
   // criando laço de repeticao 
  for(i=0 ; i < MAX; i++){
  i++; // incremento para continuar o laço de repeticao
  cout <<  i  << " "; // impressao na tela
  if (i<MAX){ j = (i*2);} // teste logico para efetuar a multiplicaçao 
  cout << j << endl; //  a cada fincalizacao do laço sera impresso na tela o resultado do incremento até que "i" seja igual ou maior que 12
         }
      
      return 0;
       }

// Identificaçao de quadrantes atraves de coordenadas (x,y).

#include <iostream>
#include <stdio.h>
using namespace std;

// declarando variaveis do tipo float "ponto flutuante"
float x,y;
// funcao do tipo void sem return
 void quadrante( float x, float y){
     // testes logicos para identificar o quadrante
    if (x > 0 && y < 0) { printf ("Quadrante_4"); printf("\n"); }
    if (x < 0 && y < 0) { printf ("Quadrante_3"); printf("\n"); }
    if (x < 0 && y > 0) { printf ("Quadrante_2"); printf("\n"); }
    if(x > 0 && y  > 0) { printf ("Quadrante_1"); printf("\n"); }
    if (x == 0 && y == 0) { printf ("Origem"); printf("\n"); }
    if (x == 0 &&  y > 0 ||  !y < 0) { printf ("Eixo Y"); printf("\n"); }
    if (y == 0 &&  x >0 ||  !x < 0) { printf ("Eixo X"); printf("\n"); }
    
//verificacao de X e Y.
printf ("%0.1f",x); printf (" "); printf ("%0.1f",y) ;
}
// funcao principal
int main ()
{

cin >> x ; // entrada de x
cin >> y; // entrada de y

quadrante(x,y); // impressao na tela referente a funcao void

}

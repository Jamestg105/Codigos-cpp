// Funçao segundo menor
#include <iostream>
#define MAX 100

using namespace std;

// declarando funcao leitura
void leitura(int v[])
{
    int i = 0;
    do
    {
        cin >> v[i];
        i++;
    } while (v[i - 1] != -1);
}
int segundomenor(int v[])
{
    //teste menor
    int i = 0, menor = v[0], menor2 = v[0];
    while (v[i] != -1) // instruçao de parada com while
    {
        if (v[i] < menor)
            menor = v[i];
        i++;
    }
    return menor;
    //segundo menor
}
// funcao principal

int main()
{
    int vetor[MAX]; // chamando o vetor 
    leitura(vetor); // chamando funcao leitura
    segundomenor(vetor); // chamando teste segundo menor 
    cout << "segundo menor: " << segundomenor(vetor); // impressao na tela 
    return 0;
}

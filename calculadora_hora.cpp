// Calculadora de Hora
#include <iostream>
using namespace std;

void calcHora(int &seg, int &hora, int &min) // funcao calculadora de hora 
{
    hora = seg / 3600;
    min = (seg % 3600) / 60;
    seg = (seg % 3600) % 60;
};

// funcao principal 
int main()
{
    int h, m, s; // declarando var int
    cout << "insira qualquer valor inteiro: "; // impressao na tela
    cin >> s; // declarando var int 
    calcHora(s, h, m); // definindo os parametros para calculadora
    cout << "hora: " << h << "\nminuto:  " << m << "\nsegundo: " << s << endl; // impressao do resultado na tela 
    ;
    return 0;
}

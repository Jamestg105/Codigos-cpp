// Verificador de substring 
#include <iostream>
#include <cstring>
#define MAX 50

using namespace std;
//funcao auxiliar de ehsubstring
bool testestring(char s1[], char s2[], int p)
{
    for (int i = 0; i < strlen(s2); i++)
    {
        if (s1[p] != s2[i])
            return false;
        p++;
    }
    return true;
}
//funcao principal substring
bool ehsubstring(char s1[], char s2[])
{
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == s2[0])
        //cout << "achei ->" << s1[i];
        {
            if (testestring(s1, s2, i) == true)
            {
                return true;
            }
        }
    }
    return false;
}
bool ehsubstring2(char s1[], char s2[])
{
    for (int i = 1; i < strlen(s1); i++)
    {
        if (s1[i] == s2[0])
        //cout << "achei ->" << s1[i];
        {
            if (testestring(s1, s2, i) == true)
            {
                return true;
            }
        }
    }
    return false;
}
    //verifica se a substring faz parte da string
    int main()
    {
        //chamada da funcao

        char string1[MAX], string2[MAX];
        cout << "Insira uma frase: ";
        cin.getline(string1, MAX);
        cout << "Insira uma letra: ";
        cin.getline(string2, MAX);

        if (ehsubstring(string1, string2)){
          if (ehsubstring2(string1, string2)){
                
                cout << " e substring";
          } 
          }
        else
            cout << " nao e substring";

        return 0;
    }

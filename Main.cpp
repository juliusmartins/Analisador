#include<iostream>
using namespace std;
int main()
{
int indice=0;
string analisador;
string entrada;
getline(cin,entrada);
cout << entrada << endl;
while(indice<entrada.size())
{
    if(isspace(entrada[indice]))
    {
        cout << "Espaço em branco" << endl;
        for (int i = 0; i < analisador.size(); i++)
        {
            if(isdigit(analisador[i]) == false)
            {
                cout << analisador << " é uma string" << endl;
            }
            else if(isdigit(analisador[i]) == true && i==analisador.size()-1)
            {
                cout << analisador << " é um número" << endl;
            }
        }
        analisador.clear();
    }
    else
    {
        analisador+=entrada[indice];
        if(indice==entrada.size()-1)
        {
            for (int i = 0; i < analisador.size(); i++)
            {
                if(isdigit(analisador[i]) == false)
                {
                    cout << analisador << " é uma string" << endl;
                }
                else if(isdigit(analisador[i]) == true && i==analisador.size()-1)
                {
                    cout << analisador << " é um número" << endl;
                }
            }
        }
    }
    indice = indice + 1;
}
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int indice = 0;
int marcador_de_variavel = 0;
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
            if(isdigit(analisador[i]) == false && i==analisador.size()-1)
            {
                cout << analisador << " é uma string" << endl;
                if(analisador == "int")
                {
                    cout << analisador << " é a palavra reservada int" << endl;
                    //Proximo texto seria uma variavel automaticamente
                    marcador_de_variavel = 1;
                }
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
                if(isdigit(analisador[i]) == false && i==analisador.size()-1)
                {
                    cout << analisador << " é uma string" << endl;
                    if(analisador == "int")
                    {
                        cout << analisador << " é a palavra reservada int" << endl;
                    }
                    else if(marcador_de_variavel==1)
                    {
                        cout << analisador << " é uma variavel" << endl;
                        marcador_de_variavel=0;
                    }
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

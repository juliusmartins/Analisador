#include<iostream>
#include<string>
using namespace std;
int main()
{
int indice = 0;
int marcador_de_variavel = 0;
int marcador_de_num_real = 0;
int marcador_de_id = 0;
string analisador;
string entrada;
getline(cin,entrada);
cout << entrada << endl;
while(indice<entrada.size())
{
    if(isspace(entrada[indice]))
    {
        if(analisador.find(",") != string::npos)
        {
            cout << "Tem o símbolo ," << endl;
            marcador_de_num_real = 1;
        }
        for (int i = 0; i < analisador.size(); i++)
        {
            if(isdigit(analisador[i]) == false && i==analisador.size()-1)
            {
                if(analisador == "integer;")
                {
                    if(analisador.find(";") != string::npos)
                    {
                        for (int i = 0; i < analisador.size() - 1; ++i)
                        {
                            cout << analisador[i];
                        }
                        cout << " é uma palavra reservada" << endl;
                    }
                    else
                    {
                        cout << analisador << " é uma palavra reservada" << endl;
                    }
                    //marcador_de_variavel = 1;
                }
                else if(analisador == "real;")
                {
                    cout << analisador << " é uma palavra reservada" << endl;
                    marcador_de_variavel = 1;
                }
                else if(analisador == "var")
                {
                    cout << analisador << " é uma palavra reservada" << endl;
                    marcador_de_variavel = 1;
                }
                else if(analisador == "program")
                {
                    cout << "Tem a palavra reservada program" << endl;
                    marcador_de_id = 1;
                }
                else if(analisador == "read")
                {
                    cout << analisador << " é uma palavra reservada" << endl;
                    marcador_de_id = 1;
                }
                else if(analisador == "write")
                {
                    cout << analisador << " é uma palavra reservada" << endl;
                    marcador_de_id = 1;
                }
                else if(analisador == "begin")
                {
                    cout << "Tem a palavra reservada begin" << endl;
                }
                else if(analisador == "end;")
                {
                    if(analisador.find(";") != string::npos)
                    {
                        for (int i = 0; i < analisador.size() - 1; ++i)
                        {
                            cout << analisador[i];
                        }
                        cout << " é uma palavra reservada" << endl;
                    }
                    else
                    {
                        cout << analisador << " é uma palavra reservada" << endl;
                    }
                }
                else if(analisador == "for")
                {
                    cout << "Tem a palavra reservada for" << endl;
                    marcador_de_id = 1;
                }
                else if(analisador == "do")
                {
                    cout << "Tem a palavra reservada do" << endl;
                }
                else if(analisador == "to")
                {
                    cout << "Tem a palavra reservada to" << endl;
                }
                else if(marcador_de_variavel==1)
                {
                    cout << analisador << " é uma variavel" << endl;
                    marcador_de_variavel = 0;
                }
                else if(marcador_de_id == 1 && analisador != "(")
                {
                    if(analisador.find(";") != string::npos)
                    {
                        for (int i = 0; i < analisador.size() - 1; ++i)
                        {
                            cout << analisador[i];
                        }
                        cout << " é um id" << endl;
                    }
                    else
                    {
                        cout << analisador << " é um id" << endl;
                    }
                    marcador_de_id = 0;
                }
                if(analisador.find(";") != string::npos)
                {
                    cout << "Tem o delimitador simples ;" << endl;
                }
                else if(analisador.find(":=") != string::npos)
                {
                    cout << "Tem o delimitador composto :=" << endl;
                }
                else if(analisador.find(":") != string::npos)
                {
                    cout << "Tem o delimitador simples :" << endl;
                }
                else if(analisador.find(">=") != string::npos)
                {
                    cout << "Tem o operador >=" << endl;
                }
                else if(analisador.find("<=") != string::npos)
                {
                    cout << "Tem o operador <=" << endl;
                }
                else if(analisador.find("=") != string::npos)
                {
                    cout << "Tem o operador =" << endl;
                }
                else if(analisador.find("+") != string::npos)
                {
                    cout << "Tem o operador +" << endl;
                }
                else if(analisador.find("-") != string::npos)
                {
                    cout << "Tem o operador -" << endl;
                }
                else if(analisador.find("*") != string::npos)
                {
                    cout << "Tem o operador *" << endl;
                }
                else if(analisador.find("/") != string::npos)
                {
                    cout << "Tem o operador /" << endl;
                }
                else if(analisador.find("//") != string::npos)
                {
                    cout << "Tem o operador //" << endl;
                }
                else if(analisador.find(">") != string::npos)
                {
                    cout << "Tem o operador >" << endl;
                }
                else if(analisador.find("<") != string::npos)
                {
                    cout << "Tem o operador <" << endl;
                }
                else if(analisador.find("<>") != string::npos)
                {
                    cout << "Tem o operador <>" << endl;
                }
                else if(analisador.find("(") != string::npos)
                {
                    cout << "Tem o delimitador simples (" << endl;
                }
                else if(analisador.find(")") != string::npos)
                {
                    cout << "Tem o delimitador simples )" << endl;
                }
                else if(analisador.find("[") != string::npos)
                {
                    cout << "Tem o delimitador simples [" << endl;
                }
                else if(analisador.find("]") != string::npos)
                {
                    cout << "Tem o delimitador simples ]" << endl;
                }
                else if(analisador.find(",") != string::npos)
                {
                    cout << "Tem o símbolo ," << endl;
                }
                else
                {
                    cout << analisador << " é uma string" << endl;
                }
            }
            else if(isdigit(analisador[i]) == true && i==analisador.size()-1)
            {
                if(marcador_de_num_real == 1)
                {
                    cout << analisador << " é um número real" << endl;
                    marcador_de_num_real = 0;
                }
                else
                {
                    cout << analisador << " é um número inteiro" << endl;   
                }
            }
        }
        analisador.clear();
    }
    else
    {
        analisador+=entrada[indice];
        if(indice==entrada.size()-1)
        {
            if(analisador.find(",") != string::npos)
            {
                cout << "Tem o símbolo ," << endl;
                marcador_de_num_real = 1;
            }
            for (int i = 0; i < analisador.size(); i++)
            {
                if(isdigit(analisador[i]) == false && i==analisador.size()-1)
                {
                    if(analisador == "integer;")
                    {
                        if(analisador.find(";") != string::npos)
                        {
                            for (int i = 0; i < analisador.size() - 1; ++i)
                            {
                                cout << analisador[i];
                            }
                            cout << " é uma palavra reservada" << endl;
                        }
                        else
                        {
                            cout << analisador << " é uma palavra reservada" << endl;
                        }
                        //marcador_de_variavel = 1;
                    }
                    else if(analisador == "real;")
                    {
                        cout << analisador << " é uma palavra reservada" << endl;
                        marcador_de_variavel = 1;
                    }
                    else if(analisador == "var")
                    {
                        cout << analisador << " é uma palavra reservada" << endl;
                        marcador_de_variavel = 1;
                    }
                    else if(analisador == "program")
                    {
                        cout << "Tem a palavra reservada program" << endl;
                        marcador_de_id = 1;
                    }
                    else if(analisador == "read")
                    {
                        cout << analisador << " é uma palavra reservada" << endl;
                        marcador_de_id = 1;
                    }
                    else if(analisador == "write")
                    {
                        cout << analisador << " é uma palavra reservada" << endl;
                        marcador_de_id = 1;
                    }
                    else if(analisador == "begin")
                    {
                        cout << "Tem a palavra reservada begin" << endl;
                    }
                    else if(analisador == "end;")
                    {
                        if(analisador.find(";") != string::npos)
                        {
                            for (int i = 0; i < analisador.size() - 1; ++i)
                            {
                                cout << analisador[i];
                            }   
                            cout << " é uma palavra reservada" << endl;
                        }
                        else
                        {
                            cout << analisador << " é uma palavra reservada" << endl;
                        }
                    }
                    else if(analisador == "for")
                    {
                        cout << "Tem a palavra reservada for" << endl;
                        marcador_de_id = 1;
                    }
                    else if(analisador == "do")
                    {
                        cout << "Tem a palavra reservada do" << endl;
                    }
                    else if(analisador == "to")
                    {
                        cout << "Tem a palavra reservada to" << endl;
                    }
                    else if(marcador_de_variavel==1)
                    {
                        cout << analisador << " é uma variavel" << endl;
                        marcador_de_variavel = 0;
                    }
                    else if(marcador_de_id == 1 && analisador != "(")
                    {
                        if(analisador.find(";") != string::npos)
                        {
                            for (int i = 0; i < analisador.size() - 1; ++i)
                            {
                                cout << analisador[i];
                            }
                            cout << " é um id" << endl;
                        }
                        else
                        {
                            cout << analisador << " é um id" << endl;
                        }
                        marcador_de_id = 0;
                    }
                    if(analisador.find(";") != string::npos)
                    {
                        cout << "Tem o delimitador simples ;" << endl;
                    }
                    else if(analisador.find(":=") != string::npos)
                    {
                        cout << "Tem o delimitador composto :=" << endl;
                    }
                    else if(analisador.find(":") != string::npos)
                    {
                        cout << "Tem o delimitador simples :" << endl;
                    }
                    else if(analisador.find(">=") != string::npos)
                    {
                        cout << "Tem o operador >=" << endl;
                    }
                    else if(analisador.find("<=") != string::npos)
                    {
                        cout << "Tem o operador <=" << endl;
                    }
                    else if(analisador.find("=") != string::npos)
                    {
                        cout << "Tem o operador =" << endl;
                    }
                    else if(analisador.find("+") != string::npos)
                    {
                        cout << "Tem o operador +" << endl;
                    }
                    else if(analisador.find("-") != string::npos)
                    {
                        cout << "Tem o operador -" << endl;
                    }
                    else if(analisador.find("*") != string::npos)
                    {
                        cout << "Tem o operador *" << endl;
                    }
                    else if(analisador.find("/") != string::npos)
                    {
                        cout << "Tem o operador /" << endl;
                    }
                    else if(analisador.find("//") != string::npos)
                    {
                        cout << "Tem o operador //" << endl;
                    }
                    else if(analisador.find(">") != string::npos)
                    {
                        cout << "Tem o operador >" << endl;
                    }
                    else if(analisador.find("<") != string::npos)
                    {
                        cout << "Tem o operador <" << endl;
                    }
                    else if(analisador.find("<>") != string::npos)
                    {
                        cout << "Tem o operador <>" << endl;
                    }
                    else if(analisador.find("(") != string::npos)
                    {
                        cout << "Tem o delimitador simples (" << endl;
                    }
                    else if(analisador.find(")") != string::npos)
                    {
                        cout << "Tem o delimitador simples )" << endl;
                    }
                    else if(analisador.find("[") != string::npos)
                    {
                        cout << "Tem o delimitador simples [" << endl;
                    }
                    else if(analisador.find("]") != string::npos)
                    {
                        cout << "Tem o delimitador simples ]" << endl;
                    }
                    else if(analisador.find(",") != string::npos)
                    {
                        cout << "Tem o símbolo ," << endl;
                    }
                    else
                    {
                        cout << analisador << " é uma string" << endl;
                    }
                }
                else if(isdigit(analisador[i]) == true && i==analisador.size()-1)
                {
                    if(marcador_de_num_real == 1)
                    {
                        cout << analisador << " é um número real" << endl;
                        marcador_de_num_real = 0;
                    }
                    else
                    {
                        cout << analisador << " é um número inteiro" << endl;   
                    }
                }
            }
        }
    }
    indice = indice + 1;
}
return 0;
}

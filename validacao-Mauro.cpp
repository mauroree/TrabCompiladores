#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fstream>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    ifstream arqE;
    string line;

    arqE.open("validacao.txt");

    if(arqE.is_open())
    {

        while(getline(arqE,line))
        {

            cout<<"\n"<<line;
            if(isdigit(line[0]))
            {
                cout<<"=> Erro" <<endl;

            }
            else if (isalpha(line[0]))
            {
                cout<< "=> Aceito" <<endl;
            }

            else if(line[0] == '%')
            {
                cout<< "=> Erro" <<endl;
            }
        }

    }
    else
    {

        cout<<"O arquivo não foi aberto."<<endl;
    }

}

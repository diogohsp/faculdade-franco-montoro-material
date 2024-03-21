#include <iostream>

using namespace std;

struct Data{

int dia;
int mes;
int ano;

};

int main(){

    setlocale(LC_ALL, "portuguese");
    Data hoje;

    cout<<"Que dia é hoje ?: ";
    cin>>hoje.dia;
    cout<<"Qual mes?: ";
    cin>>hoje.mes;
    cout<<"Qual ano ?: ";
    cin>>hoje.ano;

    cout<<"Hoje é "<<hoje.dia<<"/"<<hoje.mes<<"/"<<hoje.ano<<endl;
    system("pause");
    return 0;

}

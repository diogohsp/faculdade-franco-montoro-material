#include <iostream>

using namespace std;

struct Pessoa{

    string nome;
    int idade;
};

int main(){

    setlocale(LC_ALL, "portuguese");
    Pessoa p;

    cout<<"Qual seu nome?: ";
    getline(cin, p.nome); //Lê uma linha inteira de caracteres mesmo utilizndo ESPAÇO, cin no consegue ler o espaço por conta de bufferização
    //cin>>p.nome;

    cout<<"Quantos anos voce tem?: ";
    cin>>p.idade;

    cout<<"Nome: "<<p.nome<<endl;
    cout<<"Idade: "<<p.idade<<endl;
    return 0;

}

#include <iostream>

using namespace std;

struct Carro{
    string marca;
    string modelo;
    int ano;

};

int main(){

    setlocale(LC_ALL, "portuguese");
    Carro carro;

    cout<<"Qual a marca do carro?: ";
    getline(cin, carro.marca); //Lê uma linha inteira de caracteres mesmo utilizndo ESPAÇO, cin no consegue ler o espaço por conta de bufferização
    //cin>>p.nome;

    cout<<"Qual o modelo?: ";
    getline(cin, carro.modelo);

    cout<<"Qual o ano ?: ";
    cin>>carro.ano;

    cout<<"Carro: "<<carro.marca<<" "<<carro.modelo<< ", Ano: "<< carro.ano<<endl;
    return 0;

}

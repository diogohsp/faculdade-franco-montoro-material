#include <iostream>

using namespace std;

struct Livro{
    string titulo;
    string autor;
    int anoPublicacao;
    string disponivel;

};

int main(){

    setlocale(LC_ALL, "portuguese");
    Livro livro;

    cout<<"Digite o titulo do livro: ";
    getline(cin, livro.titulo); //Lê uma linha inteira de caracteres mesmo utilizndo ESPAÇO, cin no consegue ler o espaço por conta de bufferização
    //cin>>p.nome;

    cout<<"Digite o nome do autor: ";
    getline(cin, livro.autor);

    cout<<"Digite o ano de publicacao: ";
    cin>>livro.anoPublicacao;

    char resposta;

    cout<<"O livro está disponivel? (s/n):  ";
    cin>>resposta;

    if(resposta == 's' || resposta == 'S'){
        livro.disponivel = "Sim";
    }else{
        livro.disponivel="Nao";
    }

    cout<<"Livro: "<<livro.titulo<<endl;
    cout<<"Autor: "<<livro.autor<<endl;
    cout<<"Ano de publicacao: "<<livro.anoPublicacao<<endl;
    cout<<"Disponibilidade: "<<livro.disponivel<<endl;

    return 0;

}

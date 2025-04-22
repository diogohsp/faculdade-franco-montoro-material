#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void inserirValores();
void listaFuncionarios();

int main(){

    int codigo;
    setlocale(LC_ALL, "Portuguese");

    cout<<" 1- Exercicio 1 Inserir 5 valores NOME \n 2- Exercicio 2 Lista Funcionarios  "<<endl;
    cout<<endl;
    cout<<"Escolha o exercicio: ";
    cin>>codigo;
    cout<<endl;

    switch(codigo){
    case 1:
        inserirValores();
    break;
    case 2:
        listaFuncionarios();
    break;

    }


}

void inserirValores(){

    list<int> lista;
    list<int>::const_iterator elemento;
    int valor;

    for(int i = 0; i < 5; i++){

        cout<<"Digite um valor inteiro: ";
        cin>> valor;

        lista.push_front(valor);

    }

    elemento = lista.begin();

    do{
        cout<< *elemento<<" ";
        elemento ++;
    }while(elemento != lista.end());

}

void inserirFuncionario(list<string>& lista,string funcionario){

    lista.push_front(funcionario);

}

void imprimirFuncionariosOrdemCadastro(const list<string>& lista){

    list<string>::const_iterator elemento;
    if(lista.empty()){
        cout<<"A lista está vazia!"<<endl;
    }else{

        do{
            elemento = lista.begin();
            cout<< *elemento<<" ";
            elemento ++;
        }while(elemento != lista.end());
    }
}

void excluirFuncionario(list<string>& lista, int posicao){

    lista.erase(posicao)

}

void listaFuncionarios (){

    int qtdFuncionarios;
    int caso;
    list<string> lista;

    cout<<"Digite quantos funcionarios serão cadastrados: ";
    cin>>qtdFuncionarios;

    system("cls");

    cout<<" 1- Inserir um funcionario \n 2- Excluir um funcionario \n 3- Imprimir a lista em ordem de cadastro \n 4- Imprimir a lista ordenada \n 5- Imprimir a lista reversa";
    cin>>caso;

    switch(caso){

    case 1:
        string funcionario;
        cout<<"Digite o nome do funcionario: ";
        cin>>funcionario;
        inserirFuncionario(lista, funcionario);
    break;
    case 2:
        int posicao;
        cout<<"Qual posição você deseja excluir o funcionario: "
        cin>>posicao;
        excluirFuncionario(posicao);
    break;
    case 3:
        imprimirFuncionariosOrdemCadastro(lista);
    break;
    case 4:

    break;
    case 5:

    break;

    }
}

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void estruturaPessoa();
void animalInfo();
void estruturaEndereco();
void vetorInteiros();
int escolhaCor();

int main(){
    int codigo;
    setlocale(LC_ALL, "portuguese");

    cout<<"1- Exercicio 1 Estrutura Pessoa \n 2- Exercicio 2 Informações Animais \n 3- Exercicio 3 Estrutura Endereco \n 4- Exercicio 4 Vetor Inteiros \n 5- Exercicio 5 Escolha Cor"<<endl;
    cout<<endl;
    cout<<"Escolha o exercicio: ";
    cin>>codigo;
    cout<<endl;

    switch(codigo){

    case 1:
        estruturaPessoa();
    break;
    case 2:
        animalInfo();
    break;
    case 3:
        estruturaEndereco();
    break;
    case 4:
        vetorInteiros();
    break;
    case 5:
        escolhaCor();
    break;

    }

}

//1. Crie uma estrutura chamada pessoa que seja capaz de
//armazenar o nome, o endereço, o CPF e a idade de 5
//pessoas.

void estruturaPessoa(){

    typedef struct {
        string nome, endereco, cpf;
        int idade;

    } Pessoa;

    Pessoa pessoa[5];

    for(int i = 0; i < 5; i++){

        cout<<"Digite o nome:";
        cin>>pessoa[i].nome;

        cout<<"Digite o endereco:";
        cin>>pessoa[i].endereco;

        cout<<"Digite o cpf:";
        cin>>pessoa[i].cpf;

        cout<<"Digite o idade:";
        cin>>pessoa[i].idade;

    }

    cout<<"Os dados foram salvos!"<<endl;
}

//2. Suponha que você está desenvolvendo um programa para armazenar
//informações sobre animais em um zoológico. Crie uma estrutura chamada
//Animal que deve armazenar as seguintes informações sobre cada animal:
//
//
//Nome do animal (string)
//Espécie do animal (string)
//Idade do animal (int)
//Peso do animal em kg (float)
//
//Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais,
//que deve ser um vetor de 10 elementos do tipo Animal.
//Por fim, crie um programa que pede ao usuário para digitar os dados de 10
//animais e armazena esses dados em uma variável do tipo ListaAnimais.
//Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela.

void animalInfo(){

    struct Animal{

        string nome, especie;
        int idade;
        float peso;

    };

    const int numeroAnimais = 10;
    typedef Animal ListaAnimais[numeroAnimais];

    ListaAnimais animais;

    for(int i = 0; i < 2; i++){

        cout<<"Digite o nome: ";
        cin>>animais[i].nome;

        cout<<"Digite a especie: ";
        cin>>animais[i].especie;

        cout<<"Digite a idade: ";
        cin>>animais[i].idade;

        cout<<"Digite o peso: ";
        cin>>animais[i].peso;

    }

    for(int i = 1; i <= 2; i++){

        cout<<"Animal "<<i<<" nome: "<<animais[i].nome<<endl;
        cout<<"Animal "<<i<<" especie: "<<animais[i].especie<<endl;
        cout<<"Animal "<<i<<" idade: "<<animais[i].idade<<endl;
        cout<<"Animal "<<i<<" peso: "<<animais[i].peso<<endl;
    }
}

//3. Crie uma estrutura chamada Endereco que armazene os
//campos rua, cidade e CEP. Em seguida, crie um typedef para
//Endereco chamado TipoEndereco. Crie um programa que solicite
//ao usuário que insira informações de endereço e as armazene
//em uma variável do tipo TipoEndereco.

void estruturaEndereco(){

    struct Endereco{
        string rua, cidade, cep;
    };

    typedef Endereco TipoEndereco;

    TipoEndereco endereco;

    for(int i = 0; i < 1; i++ ){
        cout<<"Digite a rua: ";
        cin.ignore();

        getline(cin, endereco.rua);

        cout<<"Digite a cidade: ";
        cin.ignore();

        getline(cin, endereco.cidade);

        cout<<"Digite a cep: ";
        cin>>endereco.cep;
    }

    for(int i = 0; i < 1; i++ ){

        cout<<"rua: "<<endereco.rua<<endl;
        cout<<"cidade: "<<endereco.cidade<<endl;
        cout<<"cep: "<<endereco.cep<<endl;
    }

}

//4. Crie um typedef para um vetor de inteiros chamado
//VetorInteiros. Em seguida, crie um programa que declare e
//inicialize um vetor de 5 inteiros usando o typedef e exiba os
//valores na tela.


void vetorInteiros(){

    typedef int vetorInteiro;

    vetorInteiro vetor[5]={1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        cout<<vetor[i]<<endl;
    };

}

//5. Crie uma enumeração chamada Cores para representar cores
//básicas (por exemplo, vermelho, verde, azul). Em seguida, crie
//um typedef para Cores chamado TipoCor. Crie um programa que
//permita ao usuário escolher uma cor usando o typedef e exiba a
//cor escolhida na tela.

int escolhaCor(){

    int cor;

    typedef enum {vermelho, verde, azul} Cores;

    Cores TipoCor;

        cout<<"Escolha umar cor: \n 1- Vermelho\n 2- Verde \n 3- Azul"<<endl;
        cin>>cor;

        if(cor > 0 && cor < 3 ){
            TipoCor = static_cast<Cores>(cor - 1);
        }else{
            cout<<"Numero invalido!"<<endl;
        }

        cout<<"Voce escolheu: ";

        switch(TipoCor){
            case vermelho: cout<<"Vermelho!"<<endl; break;
            case verde: cout<<"Verde!"<<endl; break;
            case azul: cout<<"Azul!"<<endl; break;
        }
}






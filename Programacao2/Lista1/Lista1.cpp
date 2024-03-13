#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cmath>

//LISTA EM GRUPO - Diogo, Bryan, Pedro, Jeferson


using namespace std;

int exercicio1();
int exercicio2();
int exercicio3();
int exercicio4();
int exercicio5();
int exercicio6();

int main() {
    int codigo;
    setlocale(LC_ALL, "Portuguese");

    cout<<" 1- Exercicio 1  \n 2- Exercicio 2 \n 3- Exercicio 3 \n 4- Exercicio 4 \n 5- Exercicio 5 \n 6- Exercicio 6" <<endl;
    cout<<"Escolha o exercicio: ";
    cin>>codigo;

    switch(codigo){

        case 1:
            exercicio1();
        break;
        case 2:
            exercicio2();
        break;
        case 3:
            exercicio3();
        break;
        case 4:
            exercicio4();
        break;
        case 5:
            exercicio5();
        break;
        case 6:
            exercicio6();
        break;
        default:
            cout<<"Nenhuma opção valida digitada";
    }
}

//1-) Utilizando a linguagem C++, desenvolva um programa simples, onde é solicitado ao usuário digitar uma quantidade,
//um nome e o valor de um determinado produto até que o usuário informe que não quer mais informar nenhum novo produto.
//A cada quantidade, produto e valor unitário, o seu programa deve mostrar o valor total do produto informado
//e valor total a pagar (acumulado) de todos os produtos.

int exercicio1(){

    int quantidadeProduto, interruptor = 1;
    string nomeProduto;
    float valorProduto, totalProduto, valorTotal;

    do{
    cout <<"Entre com a quantidade do Produto :";
    cin >> quantidadeProduto;
    cout << endl;

    cout <<"Entre com o Nome do Produto :";
    cin >> nomeProduto;
    cout << endl;

    cout <<"Entre com o Valor do Produto :";
    cin >> valorProduto;
    cout << endl;

    totalProduto = quantidadeProduto * valorProduto ;
    cout << "Deseja continuar ? \n Caso Sim - Digite 1\n Caso não - Digite 2: ";
    cin>> interruptor;

    valorTotal +=totalProduto; // valorTotal = valorTotal + totalProduto

    }while(interruptor == 1);

    cout<<"O valor total dos produtos é: "<<valorTotal<<endl;

}

//    2-) Programa simples em c++, sem o uso de função,
//    recursidade ou ponteiro que gera 15 números inteiros aleatórios a ser armazenado em um vetor entre 1 e 25.
//    Seu programa deve mostrar o indice e o respectivo valor armazenado.

int exercicio2() {

int vetor[15];
    srand(time(NULL));

    for(int i = 0; i < 15; i++){

        vetor[i] = rand() % 25 + 1;
    }

    for(int i = 0; i < 15; i++){
        cout<<"Indice "<<i<<": "<<vetor[i]<<endl;
    }

}

//3-) Você deve ter percebido que o programa anterior pode gerar números aleatórios repetidos. No entanto,
//sabemos que se esses números forem palpites para um jogo de loteria, não poderemos usar os números repetidos, e dessa forma,
//faltará números para completar a aposta. Sendo assim,
//desenvolva uma nova versão do programa que não gere números repetidos, ou seja, deverão ser gerados 15 números diferentes para a aposta.

int exercicio3(){

    int vetor[15];

    for(int i = 0; i < 15; i++){
    int numero_aleatorio;
    bool repetido;
    do{
        repetido = false;
        numero_aleatorio = rand() % 25 + 1;
        for(int j = 0; j < i; j++){
            if(vetor[j] == numero_aleatorio){
                repetido = true;
                break;
            }
        }
    }while(repetido);
    vetor[i] = numero_aleatorio;
    }

    for(int i = 0; i < 15;i++){
        cout << i << "\t" << vetor[i] << "\n";
    }
}

//4-) Desenvolva um programa que solicita ao usuário um valor, um percentual mensal, calcula e mostra ao final o valor do montante. Dessa forma,
//supondo que o valor de investimento informado foi de 1000.00,
//por um período de 120 meses, a uma taxa de 1.00% ao mês,
//no sistema de juros compostos, a saída esperada deve ser algo próximo a:
//Montante: 3300.38
//Valor Investido: 1000.00
//Rendimento: 2300.38

int exercicio4(){
    float time;
    float val, mon, jur, ren;



    cout << " Insira o saldo inicial:  " << endl;
    cin >> val;

    cout << " Insira o percentual mensal:  " << endl;
    cin >> jur;

    cout << "Em quantos meses você deseja resgatar?" << endl;
    cin >> time;


    mon = val * pow((1 + (jur / 100)) , time);
    ren = mon - val ;

    cout << "==============================================="<< endl;

    cout << "Montante:  " << " " << mon << endl;
    cout << "Valor investido: " << " " << val << endl;
    cout << "Rendimento: " << " " << ren << endl;

    return 0;
}

//5-) Desenvolva um programa que verifica e mostra se um ano informado pelo usuário é ou não bissexto, considerando-se as regras a seguir:
//- Um ano é bissexto se for divisível por 4.
//No entanto, anos divisíveis por 100 não são bissextos, a menos que sejam divisíveis por 400.
//Lembre-se que estamos falando de divisão inteira.De forma resumia, para ilustrar e facilitar o seu entendimento, veja alguns exemplos:
//- Se o ano for divisível por 4, mas não por 100, é bissexto.
//- Se o ano for divisível por 100 e não for divisível por 400, não é bissexto.
//- Se o ano for divisível por 400, é bissexto.Em outras palavras:Se ano não for divisível por 100 ou ano for divisível por 400 Então o ano é bissexto
// bissexto = true, por exemploSe (bissexto)
//Bloco de comando Caso contrário Bloco de comando Alguns exemplos numéricos:1900 é divisível por 100, mas não por 400, então não é bissexto.
//2000 é divisível por 400, então é bissexto.
//2004 é divisível por 4, então é bissexto.
//2019 não é divisível por 4, então não é bissexto.

int exercicio5(){

    int ano;

    cout << "Digite um ano" << endl;
    cin >> ano;

    if((ano % 100 == 0 && ano % 400 != 0) || ano % 4 != 0)
    {
        cout << "O ano não é bissexto"<<endl;
    }else
    {
        cout << "O ano é bissexto"<<endl;
    }
}

//  6-) Programa que sorteio em um dado um numero entre 1 e 6. Solicita ao usuário um palpite,
//  verifica e mostra se o usuário acertou ou não o número gerado.
//  Seu programa deve mostrar também o numero que foi gerado, independente do usuário acertar ou não.

int exercicio6(){

    int numeroSorteado, numeroEscolhido;
    srand(time(NULL));

    while(numeroEscolhido != numeroSorteado){

        cout<<"Escolha um numero de 1 a 6 para o sorteio: ";
        cin>>numeroEscolhido;

        numeroSorteado = rand() % 6 + 1;

        cout<<"O numero escolhi foi "<<numeroEscolhido<<" e o numero sorteado foi "<<numeroSorteado<<endl;
        if(numeroEscolhido == numeroSorteado){
        cout<<"Você ganhou!!"<<endl;
        }else{
        cout<<"Você perdeu!!"<<endl;
        }
    }

}

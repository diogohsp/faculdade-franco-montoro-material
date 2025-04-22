#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cmath>
#include <ctime>
#include <cstring>

using namespace std;

int vetorMaiorMenorValor();
int palindromo();
int selecioneFibonacci();
int verificaPrimo();

int main(){

    int codigo;

    cout<<" 1- Exercicio 1 Vetor Maior Menor Valor \n 2- Exercicio 2 Palindromo \n 3- Exercicio 3 Fibonacci \n 4- Exercicio 4 Verifica Primo \n 5- Exercicio 5 \n 6- Exercicio 6" <<endl;
    cout<<"Escolha o exercicio: ";
    cin>>codigo;

    switch(codigo){

        case 1:
            vetorMaiorMenorValor();
        break;
        case 2:
            palindromo();
        break;
        case 3:
            selecioneFibonacci();
        break;
        case 4:
            verificaPrimo();
        break;
        case 5:

        break;
        case 6:

        break;
        default:
            cout<<"Nenhuma opção valida digitada";
        break;
    }

}

//1-) Desenvolva um programa que carrega um vetor com 10 números inteiros entre 1 e 50.
//Seu programa deve mostrar o conteúdo do vetor, o menor e o maior valor armazenado.

int vetorMaiorMenorValor(){

    srand(time(NULL));
    const int ARRAY_SIZE = 10;
    int vetor[ARRAY_SIZE]={}, maiorValor = vetor[0], menorValor = vetor[0];

    for(int i = 0; i <ARRAY_SIZE; i++){
        vetor[i] = rand () % 50 + 1;

        if(vetor[i] < menorValor){
            menorValor = vetor[i];
        }

        if(vetor[i] > maiorValor){
            maiorValor = vetor[i];
        }
    }

    for(int i = 0; i <ARRAY_SIZE; i++){
        cout<<vetor[i]<<" ";;
    }

    cout<<"O maior valor é: "<<maiorValor<<endl;
    cout<<"O menor valor é: "<<menorValor<<endl;

}

//2-) Desenvolva um programa que solicita uma palavra, verifica e mostra se a palavra informada pelo usuário é ou não um palindromo.
//Palíndromo é uma palavra, frase ou número que permanece igual quando lida de trás para diante, ou vice-versa.
//Você já havia percebido que a palavra Civic é um palíndromo?  Faça o seu programa e teste você mesmo!

int palindromo(){

    char palavra[100];
    bool palindrome;

    cout<<"Digite uma palavra: ";
    cin>>palavra;

    int sizeArray = strlen(palavra);

    for(int i = 0; i < sizeArray; i++){

        if(palavra[i] != palavra[sizeArray - 1 - i]){
            palindrome = false;
        }else{
            palindrome = true;
        }
    }

    if(palindrome == true){
        cout<<"A palavra "<<palavra<<" é um palindromo";
        cout<<endl;
    }else{
        cout<<"A palavra "<<palavra<<" não é um palindromo";
        cout<<endl;
    }

}

//3-) Programa que colicita ao usuário o número de termos da sequência de Fibonacci, verifica e mostra os n termos da sequência.
//Dessa forma, se for informado o número 10, a saída deve ser:  0 1 1 2 3 5 8 13 21 34 55

int fib(int n){

    if (n == 0 || n == 1){
        return n;
    }else{

    return (fib(n-1) + fib(n-2));
    }

}

int selecioneFibonacci(){

    int quantidade;

    cout<<"Quantos numeros da sequencia de fibonacci vc quer: ";
    cin>>quantidade;

    for (int i = 0; i < quantidade; i++){
        cout<<fib(i)<<" ";
    }

    cout<<endl;

}

//4-) Desenvolva um programa que solicita um número inteiro ao usuário, verifica e mostra se o número informado é ou não primo.
//Dessa forma, considerando-se que o usuário informou o número 17,
//a saída do seu programa deve ser algo como:

int verificaPrimo(){

    int num, qtdDivisaoZero = 0;
    cout<<"Digite um numero: ";
    cin>>num;

    for(int i = 1; i < num; i++){
        if(num%i == 0){
            qtdDivisaoZero ++;
        }
    }

    if(qtdDivisaoZero == 2){
        cout<<"É primo";
    }else{
        cout<<"Não é primo";
    }
    cout<<endl;
}

//5-) Desenvolver um jogo que considera dois jogadores, por exemplo o jogador1 e o jogador2.
//Cada jogador lançará (jogará) um dado. Deverá ser atribuido 1 ponto a quem tiver o maior valor sorteado no dado.
//Se os valores sorteados forem iguais, os dois jogadores marcam ponto na rodada em questão. Vence a partida quem fizer 3 pontos.
//A cada rodada você deve mostrar o valor sorteado, quem fez ponto na rodada e a pontução atual.

int jogoDado(){

}

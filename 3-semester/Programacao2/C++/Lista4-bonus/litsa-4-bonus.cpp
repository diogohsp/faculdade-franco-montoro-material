#include <iostream>
#include <time.h>

using namespace std;

int vetorAleatorio();
int vetorAleatorio2();
int vetorAleatorio3();
int matrizAleatoria();

int main(){

    int codigo;

    cout<<" 1- Exercicio 1 \n 2- Exercicio 2 \n 3- Exercicio 3 \n 4- Exercicio 4 \n 5- Exercicio 5" <<endl;
    cout<<"Escolha o exercicio: ";
    cin>>codigo;

    switch(codigo){

    case 1:
        vetorAleatorio();
    break;
    case 2:
        vetorAleatorio2();
    break;
    case 3:
        vetorAleatorio3();
    break;
    case 4:
        matrizAleatoria();
    break;
    case 5:

    break;
    case 6:

    break;
    case 7:

    break;
    case 8:

    break;
    case 9:

    break;
    case 10:

    break;

    }

}

//1-) Programa que preenche um vetor de 10 posições (elementos) com números inteiros aleatórios entre 1 e 50.
//Seu programa deve mostrar (separadamente) tanto os valores armazenados quanto o indice onde cada um dos elementos estão armazenados.


int vetorAleatorio(){

    srand(time(NULL));
    const int tamanhoVetor = 10;
    int vetor[tamanhoVetor];

    for(int i = 0; i < tamanhoVetor; i++){
        vetor[i] = (rand()%50) + 1;
    }

    cout<<"Indice\t"<<"Valor"<<endl;

    for(int i = 0; i < tamanhoVetor; i++){
        cout<<i<<"\t"<<vetor[i]<<endl;
    }

}

//2-) Desenvolva uma nova versão do programa anterior que considera mostrar o valor e a posição do maior e do menor valor armazenado no vetor,
// além de mostrar todos os valores e indices onde estes estão armazenados.

int vetorAleatorio2(){

    srand(time(NULL));
    const int tamanhoVetor = 10;
    int vetor[tamanhoVetor];

    for(int i = 0; i < tamanhoVetor; i++){
        vetor[i] = (rand()%50) + 1;
    }

    int menorValor = vetor[0];
    int maiorValor = vetor[0];

    for(int i = 0; i < tamanhoVetor; i++){

        if(vetor[i] >= maiorValor){
            maiorValor = vetor[i];
        }

        if(vetor[i] <= menorValor){
            menorValor = vetor[i];
        }
    }

    cout<<"Indice\t"<<"Valor"<<endl;

    for(int i = 0; i < tamanhoVetor; i++){
        cout<<i<<"\t"<<vetor[i]<<endl;
    }

    cout<<"Maior valor: "<<maiorValor<<endl;
    cout<<"Menor valor: "<<menorValor<<endl;
}

//3-) Desenvolva uma nova versão do programa anterior que considera
// número de elementos do vetor como uma informações a ser fornecida pelo usuário.

int vetorAleatorio3(){

    srand(time(NULL));
    int tamanhoVetor;

    cout<<"Entre com o tamanho do vetor: ";
    cin>>tamanhoVetor;

    int vetor[tamanhoVetor];

    for(int i = 0; i < tamanhoVetor; i++){
        vetor[i] = (rand()%50) + 1;
    }

    int menorValor = vetor[0];
    int maiorValor = vetor[0];

    for(int i = 0; i < tamanhoVetor; i++){

        if(vetor[i] >= maiorValor){
            maiorValor = vetor[i];
        }

        if(vetor[i] <= menorValor){
            menorValor = vetor[i];
        }
    }

    cout<<"Indice\t"<<"Valor"<<endl;

    for(int i = 0; i < tamanhoVetor; i++){
        cout<<i<<"\t"<<vetor[i]<<endl;
    }

    cout<<"Maior valor: "<<maiorValor<<endl;
    cout<<"Menor valor: "<<menorValor<<endl;
}

//4-) Programa de preenche uma matriz de 3 linhas e 4 colunas (12 elementos) com números inteiros aleatórios entre 1 e 50.
//Seu programa deve mostrar (separadamente) tanto os valores armazenados quanto o indice onde cada um dos elementos estão armazenados.

int matrizAleatoria(){

    const int tamanhoLinhas = 3;
    const int tamanhoColunas = 4;
    srand(time(NULL));
    int matriz[tamanhoLinhas][tamanhoColunas];

    for (int i = 0; i < tamanhoLinhas; i++){
        for(int j = 0; j < tamanhoColunas; j++){
            matriz[i][j] = (rand()%50)+1;
        }
    }

    for (int i = 0; i < tamanhoLinhas; i++){
        for(int j = 0; j < tamanhoColunas; j++){
            cout<<"indice: "<<i<<j<<" "<<"valor: "<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

}

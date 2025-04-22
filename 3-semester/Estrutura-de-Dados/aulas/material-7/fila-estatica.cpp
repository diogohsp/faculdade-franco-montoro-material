#include <iostream>

using namespace std;

#define TAM 10

void iniciaPonteirosFila(int *inicio, int *fim);
void imprimeFila(int vetor[TAM], int tamanho);
int retornaTamanho(int fim, int inicio);
bool filaCheia(int fim);
bool filaVazia(int inicio, int fim);
void enfileirar(int fila[TAM], int valor, int *fim);
void desenfileirar(int fila[TAM], int *inicio, int fim);

int main(){

    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int inicio, fim;

    iniciaPonteirosFila(&inicio, &fim);

    enfileirar(fila, 10, &fim);
    enfileirar(fila, 9, &fim);
    enfileirar(fila, 8, &fim);
    enfileirar(fila, 7, &fim);
    enfileirar(fila, 6, &fim);
    enfileirar(fila, 5, &fim);
    enfileirar(fila, 4, &fim);
    enfileirar(fila, 3, &fim);
    enfileirar(fila, 2, &fim);
    enfileirar(fila, 1, &fim);

    imprimeFila(fila, retornaTamanho(fim, inicio));

    desenfileirar(fila, &inicio, fim);
    desenfileirar(fila, &inicio, fim);
    desenfileirar(fila, &inicio, fim);

    imprimeFila(fila, retornaTamanho(fim, inicio));

    return 0;
}

void iniciaPonteirosFila(int *inicio, int *fim){

    *inicio = 0;
    *fim = -1;

}

void imprimeFila(int vetor[TAM], int tamanho){

    cout<<endl;

    for(int cont = 0; cont < TAM; cont++){

        cout<< vetor[cont] <<endl;
    }
    cout<<endl;
}

int retornaTamanho(int fim, int inicio){

    return (fim - inicio) + 1;

}

bool filaCheia(int fim){

    if (fim == TAM -1){

        return true;

    }else{

        return false;

    }

}

bool filaVazia(int inicio, int fim){

    if (inicio > fim){
        return true;
    }else{
        return false;
    }
}

void enfileirar(int fila[TAM], int valor, int *fim){

    if(filaCheia(*fim)){

        cout<<"FILA CHEIA!";

    }else{

        *fim = *fim + 1;
        fila[*fim] = valor;

    }
}

void desenfileirar(int fila[TAM], int *inicio, int fim){

    if(filaVazia(*inicio, fim)){

        cout<<"A FILA ESTÁ VAZIA!";

    }else{

        cout<<"O valor "<<fila[*inicio]<<" dequeue"<<endl;
        fila[*inicio] = 0;
        *inicio = *inicio + 1;

    }
}

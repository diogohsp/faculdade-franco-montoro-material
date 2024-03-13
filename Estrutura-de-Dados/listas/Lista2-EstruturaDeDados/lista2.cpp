#include <iostream>
#include <locale.h>
#include <math.h>


using namespace std;

int verificaNome();
int mediaSala ();
int mapeandoArray();
int arrayInverso();
int somaVetores();
int temperatura();

int main() {
    int codigo;
    setlocale(LC_ALL, "Portuguese");

    cout<<" 1- Exercicio 1 VERIFICA NOME \n 2- Exercicio 2 MEDIA DA SALA \n 3- Exercicio 3 MAPEANDO O ARRAY \n 4- Exercicio 4 ARRAY INVERSO \n 5- Exercicio 5 SOMA DE VETORES \n 6- Exercicio 6 TEMPERATURA"<<endl;
    cout<<endl;
    cout<<"Escolha o exercicio: ";
    cin>>codigo;
    cout<<endl;

    switch(codigo){

        case 1:
            verificaNome();
        break;
        case 2:
            mediaSala();
        break;
        case 3:
            mapeandoArray();
        break;
        case 4:
           arrayInverso();
        break;
        case 5:
            somaVetores();
        break;
        case 6:
            temperatura();
        default:
            cout<<"Exercicio não existe!";
        break;
    }

}

//1. Escreva um programa em C++ que permita a leitura dos nomes de 10
//pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
//deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
//escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
//anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.

int verificaNome(){

    const int ARRAY_SIZE = 10;
    string nomes[ARRAY_SIZE] = {};
    string nomeProcurado;
    bool nomeEncontrado = false;

    for(int i = 0; i < ARRAY_SIZE; i++){
        cout<<"Digite o "<<i+1<<"° nome: ";
        cin>>nomes[i];
    }

    cout<<"Procure um nome na lista: ";
    cin>>nomeProcurado;

    for(int i = 0; i< ARRAY_SIZE; i++){
        if(nomes[i] == nomeProcurado){
            nomeEncontrado = true;
        }
    }

    if(nomeEncontrado){
        cout<<"O nome está na lista!";
    }else{
        cout<<"O nome não está na lista";
    }
}

//2. Escreva um programa em C++ que permita a leitura das notas de uma
//turma de 20 alunos. Calcular a média da turma e contar quantos alunos
//obtiveram nota acima desta média calculada. Escrever a média da turma
//e o resultado da contagem.

int mediaSala (){

    const int QUANTIDADE_ALUNOS = 20;
    int notas[QUANTIDADE_ALUNOS] = {};
    int notasAcimaDaMedia = 0;
    float mediaSala = 0, totalNotas = 0;

    for(int i=0; i < QUANTIDADE_ALUNOS; i++){
         cout<<"Digite a "<<i+1<<"° nota: ";
         cin>>notas[i];
         totalNotas += notas[i];

         if(notas[i] >= 7){
            notasAcimaDaMedia++;
         }
    }

    mediaSala = totalNotas / 20;
    cout<<"A média da sala é "<<mediaSala<<endl;
    cout<<"A sala possui "<<notasAcimaDaMedia<<" alunos acima da média";

}

//3. Ler um vetor A de 10 números. Após, ler mais um número e guardar em
//uma variável X. Armazenar em um vetor M o resultado de cada
//elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M.

int mapeandoArray(){

    const int ARRAY_SIZE = 10;
    int A[ARRAY_SIZE]={}, M[ARRAY_SIZE]={}, X;

    for(int i = 0; i < ARRAY_SIZE; i++){
        cout<<"Digite o valor do indice "<<i<<" do vetor A: ";
        cin>>A[i];
    }

    cout<<"Digite o valor que o vetor A será multiplicado: ";
    cin>>X;

      for(int i = 0; i < ARRAY_SIZE; i++){
        M[i] = A[i] * X;
      }

    cout<<"O vetor M é: ";
      for(int i = 0; i < ARRAY_SIZE; i++){
       cout<<M[i];
      }
}

//4. Faça um programa em C++ para ler 20 números e armazenar em um vetor.
//Após a leitura total dos 20 números, o algoritmo deve escrever esses 20
//números lidos na ordem inversa.

int arrayInverso(){

    const int ARRAY_SIZE = 5;
    int arrayBase[ARRAY_SIZE] = {}, arrayInverso[ARRAY_SIZE] = {};

    for(int i = 0; i < ARRAY_SIZE; i++){
        cout<<"Digite o valor do indice "<<i<<": ";
        cin>>arrayBase[i];
    }

    for(int i = 0; i<=ARRAY_SIZE; i++){
        arrayInverso[i] = arrayBase[ARRAY_SIZE - (i + 1)];
    }

    cout<<"O array inverso é: ";
    for(int i = 0; i<ARRAY_SIZE; i++){
        cout<<arrayInverso[i];
    }


}

//5. Faça um programa em C++ para ler um valor N qualquer (que será o
//tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um)
//e depois armazenar em um terceiro vetor Soma a soma dos elementos do
//vetor A com os do vetor B (respeitando as mesmas posições) e escrever o
//vetor Soma.

int somaVetores (){

    int tamanhoVetores;

    cout<<"Digite o tamanho dos vetores: ";
    cin>>tamanhoVetores;

    int A[tamanhoVetores]={}, B[tamanhoVetores]={}, somaAB[tamanhoVetores]={};

    for(int i=0; i < tamanhoVetores; i++){
         cout<<"Digite o valor do indice "<<i<<" do vetor A: ";
         cin>>A[i];
    }
    for(int i=0; i < tamanhoVetores; i++){
         cout<<"Digite o valor do indice "<<i<<" do vetor B: ";
         cin>>B[i];
    }
    for(int i=0; i < tamanhoVetores; i++){
         somaAB[i] = (A[i] + B[i]);
    }

    cout<<"O vetor A é:";
    for(int i=0; i < tamanhoVetores; i++){
         cout<<A[i];
    }

    cout<<endl;

    cout<<"O vetor B é:";
    for(int i=0; i < tamanhoVetores; i++){
         cout<<B[i];
    }

    cout<<endl;

    cout<<"A soma dos vetores é: ";
    for(int i=0; i < tamanhoVetores; i++){
         cout<<somaAB[i];
    }

}

//6. Faça um programa em C++ para ler e armazenar em um vetor a temperatura
//média de todos os dias do ano. Calcular e escrever:
//a) Menor temperatura do ano
//b) Maior temperatura do ano
//c) Temperatura média anual
//d) O número de dias no ano em que a temperatura foi inferior a média
//anual

int temperatura(){

    const int ARRAY_SIZE = 365;
    int temperaturas[ARRAY_SIZE] = {};
    int menorTemperatura = 0, maiorTemperatura = 0;
    float somaTemperaturas = 0,mediaTemperatura = 0;

    for(int i = 0; i<ARRAY_SIZE; i++){
        cout<<"Digite a temperatura do dia "<<i + 1<<": ";
        cin>>temperaturas[i];

        //MEDIA TEMPERATURAS

        somaTemperaturas +=  temperaturas[i];
    }

    mediaTemperatura = somaTemperaturas/ARRAY_SIZE;

    menorTemperatura = temperaturas[0];

    for(int i = 0; i<ARRAY_SIZE; i++){

        //MAIOR TEMPERATURA
        if(temperaturas[i] > maiorTemperatura){
            maiorTemperatura = temperaturas[i];
        }

        //MENOR TEMPERATURA
        if(temperaturas[i] < menorTemperatura){
            menorTemperatura = temperaturas[i];
        }
    }

    cout<<"A temperatura mais alta do ano foi: "<<maiorTemperatura<<endl;
    cout<<"A temperatura mais baixa do ano foi: "<<menorTemperatura<<endl;
    cout<<"A temperatura média do ano foi: "<<mediaTemperatura<<endl;
}


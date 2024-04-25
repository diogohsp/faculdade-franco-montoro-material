#include <iostream>

using namespace std;

int padrao1();
int padrao2();
int padraoUsuario();
int totalValor();

main(){

    int codigo;

    cout<<" 1- Exercicio 1 \n 2- Exercicio 2 \n 3- Exercicio 3 \n 4- Exercicio 4 \n 5- Exercicio 5" <<endl;
    cout<<"Escolha o exercicio: ";
    cin>>codigo;

    switch(codigo){

        case 1:
            padrao1();
        break;
        case 2:
            padrao2();
        break;
        case 3:
            padraoUsuario();
        break;
        case 4:
            totalValor();
        break;
        case 5:

        break;
        default:
            cout<<"Nenhuma opção valida digitada";
        break;
    }

}

int padrao1(){

    int num;

    cout<<"Digite um numero: ";
    cin>> num;

    for(int i = 1; i <= num; i++){

        if((i ^ 1) == i + 1){
            cout<<i;
        }else{
            cout<<"*";
        }

        cout<<"\t";

        if(i % 3 == 0){
            cout<<i;
        }else{
            cout<<"*";
        }

        cout<<"\t";

        if(i % 5 == 0){
            cout<<i;
        }else{
            cout<<"*";
        }
        cout<<endl;
    }
}

int padrao2(){

    int num;

    cout<<"Digite um numero: ";
    cin>> num;

    for(int i = num; i > 0; i--){

        if((i ^ 1) == i + 1){
            cout<<i;
        }else{
            cout<<"*";
        }

        cout<<"\t";

        if(i % 3 == 0){
            cout<<i;
        }else{
            cout<<"*";
        }

        cout<<"\t";

        if(i % 5 == 0){
            cout<<i;
        }else{
            cout<<"*";
        }
        cout<<endl;
    }
}

int padraoUsuario(){

    int num;
    char caso;

    cout<<"Digite um numero: ";
    cin>> num;

    cout<<"Para o caso crescente digite C, Para o caso decrescente digite - D: ";
    cin >> caso;

     switch(caso){

        case 'C':
            for(int i = 1; i <= num; i++){

        if((i ^ 1) == i + 1){
            cout<<i;
        }else{
            cout<<"*";
        }

        cout<<"\t";

        if(i % 3 == 0){
            cout<<i;
        }else{
            cout<<"*";
        }

        cout<<"\t";

        if(i % 5 == 0){
            cout<<i;
        }else{
            cout<<"*";
        }
        cout<<endl;
    }
        break;
        case 'D':
            for(int i = num; i > 0; i--){

        if((i ^ 1) == i + 1){
            cout<<i;
        }else{
            cout<<"*";
        }

        cout<<"\t";

        if(i % 3 == 0){
            cout<<i;
        }else{
            cout<<"*";
        }

        cout<<"\t";

        if(i % 5 == 0){
            cout<<i;
        }else{
            cout<<"*";
        }
        cout<<endl;
    }
        break;

        default:
            cout<<"Nenhuma opção valida digitada";
        break;
    }
}

int totalValor(){

    int num, totalValor = 0, totalSemValor = 0;

    cout<<"Digite um numero: ";
    cin>> num;

    for(int i = num; i > 0; i--){

        if((i ^ 1) == i + 1){
            cout<<i;
            totalValor += i;
        }else{
            cout<<"*";
            totalSemValor +=i;
        }

        cout<<"\t";

        if(i % 3 == 0){
            cout<<i;
            totalValor += i;
        }else{
            cout<<"*";
            totalSemValor +=i;
        }

        cout<<"\t";

        if(i % 5 == 0){
            cout<<i;
            totalValor += i;
        }else{
            cout<<"*";
            totalSemValor +=i;
        }
        cout<<endl;
    }

    cout<<"Total com valores: "<<totalValor<<endl;
    cout<<"Total sem valores: "<<totalSemValor<<endl;

}





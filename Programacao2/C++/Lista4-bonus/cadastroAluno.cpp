#include <iostream>

using namespace std;

#define nRegistros 1

typedef struct{

    int ra;
    float nota1, nota2, media;

} Cadastro;

int main(){

    Cadastro alunos[nRegistros];

    for(int i = 0; i < nRegistros; i++){

        cout<<"Entre com o RA do aluno: ";
        cin>>alunos[i].ra;

        cout<<"Entre com a primeira nota do aluno: ";
        cin>>alunos[i].nota1;

        cout<<"Entre com a segunda nota do aluno: ";
        cin>>alunos[i].nota2;

        alunos[i].media=(alunos[i].nota1 + alunos[i].nota2)/2;

    }

    cout<<"RA\t"<<"Nota1\t"<<"Nota2\t"<<"Média\n";
    for(int i = 0; i<nRegistros; i++){

        cout<<alunos[i].ra<<"\t"<<alunos[i].nota1<<"\t"<<alunos[i].nota2<<"\t"<<alunos[i].media<<endl;

    }

}

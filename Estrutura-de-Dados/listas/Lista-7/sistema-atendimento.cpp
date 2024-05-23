#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int inserirCliente();
int atenderCliente();
int mostrarFila();
int encerrarSistema();

int main(){

    int codigo;
    bool continuar = true;
    string cliente;
    queue<string> fila;

    while(continuar == true){

        cout<<"1 - Adicionar novo cliente a fila"<<endl;
        cout<<"2 - Atender cliente"<<endl;
        cout<<"3 - Mostrar a fila"<<endl;
        cout<<"4 - Encerrar programa"<<endl;

        switch(codigo){

            case 1:
                inserirCliente();
            break;
            case 2:
                atenderCliente();
            break;
            case 3:
                mostrarFila();
            break;
            case 4:
                encerrarSistema();
            break;
        }

    }
}

int inserirCliente(){

    cout<<"Digite o nome do cliente: "<<endl;
    getline(cin, cliente);

    fila.push(cliente);

}

int atenderCliente(){

    fila.pop();

}

int mostrarFila(){

    queue<string>filaAuxiliar = fila;

    cout<<"Clientes na fila: ";
    while(!filaAuxiliar.empty()){

        cout<<filaAuxiliar.front()<<" ";
        fila.pop();
    }
    cout<<endl;
}

int encerrarSistema(){

    continuar = false;

}

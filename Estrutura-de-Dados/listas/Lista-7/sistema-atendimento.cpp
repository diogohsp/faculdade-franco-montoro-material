#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int inserirCliente(queue<string> &fila);
int atenderCliente(queue<string> &fila);
int mostrarFila(queue<string> fila);
int encerrarSistema(bool &continuar);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo;
    bool continuar = true;
    string cliente;
    queue<string> fila;

    while (continuar) {
        cout << "1 - Adicionar novo cliente à fila" << endl;
        cout << "2 - Atender cliente" << endl;
        cout << "3 - Mostrar a fila" << endl;
        cout << "4 - Encerrar programa" << endl;

        cout << "Escolha uma opção: ";
        cin >> codigo;

        switch (codigo) {
            case 1:
                inserirCliente(fila);
                break;
            case 2:
                atenderCliente(fila);
                break;
            case 3:
                mostrarFila(fila);
                break;
            case 4:
                encerrarSistema(continuar);
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    }

    return 0;
}

int inserirCliente(queue<string> &fila) {
    string cliente;
    cout << "Digite o nome do cliente: ";
    cin.ignore();
    getline(cin, cliente);
    fila.push(cliente);
    return 0;
}

int atenderCliente(queue<string> &fila) {
    if (!fila.empty()) {
        cout << "Cliente atendido: " << fila.front() << endl;
        fila.pop();
    } else {
        cout << "Não há clientes na fila!" << endl;
    }
    return 0;
}

int mostrarFila(queue<string> fila) {
    queue<string> filaAuxiliar = fila;

    cout << "Clientes na fila: ";
    while (!filaAuxiliar.empty()) {
        cout << filaAuxiliar.front() << " ";
        filaAuxiliar.pop();
    }
    cout << endl;
    return 0;
}

int encerrarSistema(bool &continuar) {
    continuar = false;
    return 0;
}

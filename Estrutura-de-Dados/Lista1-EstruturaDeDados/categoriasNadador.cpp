#include <iostream>

using namespace std;

int nadador() {

 int altura, peso, imc;

    cout << "peso do pau em kg: ";
    cin >> peso;

    cout << "altura em metros: ";
    cin >> altura;

    imc = peso / (altura^2);
    cout<<"Seu IMC e: "<<imc<<endl;

    if(imc < 20){
        cout<<"Abaixo do peso";
    }else if(imc > 20 && imc < 25){
        cout<< "Peso Ideal";
    }else{
        cout<<"Acima do peso";
    }

}

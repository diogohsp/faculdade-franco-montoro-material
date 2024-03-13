#include <iostream>

using namespace std;

void inverte(char nome[]){

  //strlen retorna o tamanho da string
  
  int length = strlen(nome);
  for(int i = length - 1; i>=0; i--){
    cout<<nome[i]
  }

}

int main() {

  char nome[] = "diogo";
  inverte(nome);
  cout<<endl;
  
  //isalpha retorna true se caractere testado for alfabético
  if(isalpha(nome[0])){
    cout<<"caractere alfabetico"<<endl;
  }else {
    cout<<"caractere numerico"<<endl;
  }

  //isdigit retorna true se for um digito
  if(isdigit(nome[0])){
    cout<<"numero"<<endl;
  }else{
    cout<<"letra"<<endl;
  }
  
  //isupper retorna true se o caractere for maiusculo
  if(isupper(nome[0])){
    cout<<"maiusculo"<<endl;
  }else{
    cout<<"minusculo"<<endl;
  }

}

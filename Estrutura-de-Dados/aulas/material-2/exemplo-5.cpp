#include <iostream>

using namespace std;

#define TAMANHO 5

int main(inta a[]) {

  int i, max;
  //Achar o maior valor do array
  max = a[0];
  while(i < TAMANHO){
  if(max < a[i]){
    max = a[i];
    }
  i++;
  }
  return max;
}

int main() {
  
  int i, valor[TAMANHO];
  i = 0;
  while(i < TAMANHO){
    cout<<"Entre um inteiro: ";
    cin>>valor[i];
    i++
  }
  cout<< "O maior eh "<<maior(valor)<<endl;
  
  return 0
}

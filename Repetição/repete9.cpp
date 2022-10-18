#include <iostream>
using namespace std;

void func(int vetor[], int tamanho){
  for(int i=0; i<tamanho; i++){
    cout<< vetor[i]<<", ";
    }
}

int main(){
	int numer, valor;
	cin>>numer;
	int vetor[numer];
	
for(valor=0; valor<numer; valor++){
  cin>> vetor[valor];
	}
	func(vetor,numer);
return 0;
}

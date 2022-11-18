#include <iostream>
using namespace std;

int retorno(int tama,int vet[tama], int num){
	int i=0;
	if(i<tama){
	vet[i]={num};
	i++;
	}
	return retorno(vet[tama], num);
}
		
	
	
	
	
	
		
		

int main(){
	return 0;
}

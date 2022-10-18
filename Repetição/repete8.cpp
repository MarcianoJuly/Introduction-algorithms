#include <iostream>
using namespace std;

int main(){
	int numero,nM=0,nor=0,arm=0,media=0;
	int cont=1;
	 
	while(cont<=7){
	cin>>numero;
	arm +=numero;
	
		if(numero>nM){
			nor=nM;
			nM=numero;
		}
		else if(numero>nor){
			nor=numero;
		}
		cont++;
		media=(arm-(nor+nM))/5;
	}
	cout<<nM<<"\n"<<nor<<"\n"<<media;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int quadro, cont=1,letra=1,linha=1;
	char simbo;
	
	cin>>quadro;
	
	while(linha<=quadro){
		cont=0;
		
		if(linha%2!=0){
			while(cont<quadro){
				letra=cont;
			if(letra%2!=0){
				simbo=35;
			}else{
				simbo=46;
			}
			cout<<simbo;
			cont++;
			}
		}
		else{
			while(cont<quadro){
				letra=cont;
			if(letra%2!=0){
				simbo=46;
			}else{
				simbo=35;
			}
			cout<<simbo;
			cont++;
			}
		}
	cout<<endl;
	linha++;
	}
	return 0;
}
			

#include <iostream>
using namespace std;

void conver(float tamanho, char num){
	float conta;
	char c=99, m=109;
	if(num==c){
		conta=(tamanho*100);
		cout<<conta<<" "<<"cm"<<endl;
	}
	else if(num==m){
		conta=(tamanho/100);
		cout<<conta<<" "<<"m"<<endl;
	}
	else{
		cout<<"erro"<<endl;
	}
}

int main(){
	float tamanho;
	char num;
	cin>>tamanho>>num;
	conver(tamanho,num);
	return 0;
}
	

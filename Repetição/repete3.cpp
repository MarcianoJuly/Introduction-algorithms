#include <iostream>
using namespace std;

int main(){
	int linhas=1,cont=0,vez=0;
	int letra=97;
	int conta;
	 
	cin>>linhas;
	while(cont<linhas){
	cont++;
	
		if(vez<cont){
			conta=(letra+vez);
		
			 if(vez%2==1){
				cout<<"\n";
			}
			vez++;
		}	
			cout<<char(conta)<<" ";
	}
	return 0;
}
		

	

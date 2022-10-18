#include <iostream>
using namespace std;

int main(){
	int linhas=1,cont=0,col=1;
	char letra;
	 
	cin>>linhas; 
	while(cont<linhas){
		cont++;
		letra=97;
		cout<<letra<<' ';
		col=1;
		
		while(col<cont){
		letra++;
		col++;
		cout<<letra<<' ';
	}
	cout<<endl;
}
		
		
	return 0;
}
		

	

	

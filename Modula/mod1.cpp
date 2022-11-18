#include <iostream>
using namespace std;

void tri(int linha){
	int cont=0,col;
	int num;
	
	while(cont<linha){
		cont++;
		num=1;
		col=1;
		cout<<num<<' ';
		
		while(col<cont){
		num++;
		col++;
		cout<<num<<' ';
		}
	cout<<endl;
	}
}

int main(){
	int linha;
	cin>>linha;
	tri(linha);
	return 0;
}
	

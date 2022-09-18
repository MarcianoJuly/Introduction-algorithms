#include <iostream>
using namespace std;

int main(){
	int numerao,numero,par=0, impar=0;

	cin>>numerao;
	numero=numerao/10000;
	if(numero%2==0){ //1
		par++;
	}
	else{
		impar++;
	}
	
	numero=(numerao/1000)%10; //2
	if(numero%2==0){
		par++;
	}
	else{
		impar++;
	}
	
	numero=(numerao/100)%100; //3
	if(numero%2==0){
		par++;
	}
	else{
		impar++;
	}
	
	numero=(numerao/10)%1000; //4
	if(numero%2==0){
		par++;
	}
	else{
		impar++;
	}
	
	numero=(numerao
	%10); //5
	if(numero%2==0){
		par++;
	}
	else{
		impar++;
	}
	
	cout<<par<<"\n"<<impar<<endl;
	return 0;
}
	
	
	

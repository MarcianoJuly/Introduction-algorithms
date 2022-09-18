#include <iostream>
using namespace std;

int main(){
	char letra;
	
	cin>>letra;
	int letraa= letra;
	if(90>=letraa and letraa>=65){	
		cout<<"MAIUSCULA"<<endl;
	}
	
	else if(letraa>=97 and 122>=letraa){
		cout<<"MINUSCULA"<<endl;
	}
	return 0;
}
	

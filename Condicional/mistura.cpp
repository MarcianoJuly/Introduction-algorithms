#include <iostream>
using namespace std;

int main(){
	string x, y;
	
	cin>>x>>y;
	if(x==y){
		cout<<x<<endl;
	}
	
	else if((x=="azul" and y=="amarelo")or(x=="amarelo" and y=="azul")){
		cout<<"verde"<<endl;
	}
	
	else if((x=="azul" and y=="vermelho")or(x=="vermelho" and y=="azul")){
		cout<<"violetan"<<endl;
	}
	
	else if((x=="vermelho" and y=="amarelo")or(x=="amarelo" and y=="vermelho")){
		cout<<"laranja"<<endl;
	}
	return 0;
}
	

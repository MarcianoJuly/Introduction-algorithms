#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int tipo;
	float valor, poupanca, fixa;
	
	cin>>tipo>>valor;
	std::cout<<std::fixed<<std::setprecision(2);
	if(tipo==1){
		poupanca=(1.005*valor);
		cout<<poupanca<<endl;
	}
	else if(tipo==2){
		fixa=((1.03*valor)-30);
		cout<<fixa<<endl;
	}
	return 0;
}
		
	

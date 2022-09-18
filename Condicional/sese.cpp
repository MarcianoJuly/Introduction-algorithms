#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float saldo, cred;
	cin>> saldo;
	std::cout << std::fixed<< std::setprecision(2);
	
	if (saldo>16000){
		cred=0.3*saldo;
		cout<<saldo<<"\n"<<cred<<endl;
	}
	else if (saldo>800){
		cred=0.25*saldo;
		cout<<saldo<<"\n"<<cred<<endl;
	}
	else if (saldo>400){
		cred=0.2*saldo;
		cout<<saldo<<"\n"<<cred<<endl;
	}
	else if (saldo>200){
		cred=0.15*saldo;
		cout<<saldo<<"\n"<<cred<<endl;
	}
	else if (saldo>0){
		cred=0.10*saldo;
		cout<<saldo<<"\n"<<cred<<endl;
	}
	else if (saldo<=0){
		cout<<saldo<<"\n"<<"zero"<<endl;
	}
	return 0;
}
	
	

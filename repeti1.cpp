#include <iostream>
using namespace std;

int main(){
	int divi,den,quan=0,resul=0;
	
	cin>>divi;
	while(resul<divi){
		cin>>den;
		quan++;
		if(divi>den){
			resul += den;
		}			
	}
	cout<<quan<<endl;
	return 0;
}
		
		

#include <iostream>
using namespace std;

int main(){
	int divi,den,quan=0,resul=0;
	
	cin>>divi>>den;
	while(resul<divi){
		if(den==0)
			cout<<quan<<endl;
		else{
			quan++;
			resul +=den;
			cout<<quan<<endl;
		}
	}
	return 0;
}
		
		

#include <iostream>
#include <string>
using namespace std;

int main(){
	int numero,resto1,resto2,numeros1,numeros2,numerao1,numerao2;
	string cor, cord;
	
	cin>>cor>>cord;
	cin>>numero;
	
	resto1=numero%10;
	numerao1=numero/100000;
	numeros1=resto1-numerao1;
	
	numerao2=(numero/10000)%10;
	resto2=(numero%100)/10;
	numeros2=resto2-numerao2;

		if(numeros1==0 and numeros2==0){
			cout<<cor<<endl;
		}
		else{
			cout<<cord<<endl;
		}
	return 0;
}
	
	

#include <iostream>
using namespace std;

double parcelas(int n, double& soma){
	double form,arm;
	double cont=0;
	
	while(n>cont){
		cont++;
		form=cont*(cont+1)/(cont+3);
		soma=form+arm;
		arm=form;
	}
	return soma;
}

int main(){
	int p;
	double soma;
	
	cin>>p;
	parcelas(p, soma);
	cout<<soma<<endl;
}
		

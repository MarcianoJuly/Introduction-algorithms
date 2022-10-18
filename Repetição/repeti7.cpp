#include <iostream>
using namespace std;

int main(){
	int ficha,cont=1, F=0, M=0;
	float altura=0, alturaM=0, alturam=0, alturaF=0, alturaf=0, mediaM=0, mediaF=0;
	char genero;
	
	
	cin>>ficha;
	while(cont<=ficha){
		cin>>altura>>genero;
		
		if(genero=='m'){
			mediaM +=altura;
			M++;
			if(altura>alturaM){
				alturaM=altura;
				
			}else if(altura<alturam){
				alturam=altura;
				altura=alturam;
			}
		}
			
		else if(genero=='f'){
			mediaF +=altura;
			F++;
			if(altura>alturaF){
				alturaF=altura;
				
			}else if(altura<alturaf){
				alturaf=altura;
				altura=alturaf;
			}	
		}
		cont++;	
	}
	if(alturaM>alturaF){  //maior altura
		cout<<alturaM<<endl;
	}else{
		cout<<alturaF<<endl;
	}
		
	if(alturam>alturaf and F!=0){ //menor altura
		cout<<alturaf<<endl;
	}else if(M!=0){
		cout<<alturam<<endl;
	}
	else{
		cout<<alturaf<<endl;
	}
	
	if(F==0){
		cout<<"erro"<<endl;
	}else{
		cout<<mediaF/F<<endl;
	}
	
	if(M==0){
		cout<<"erro"<<endl;
	}else{
		cout<<mediaM/M<<endl;
	}
	
	cout<<(mediaM+mediaF)/ficha<<endl;
	cout<<alturam<<" "<<alturaf;
	return 0;
}	

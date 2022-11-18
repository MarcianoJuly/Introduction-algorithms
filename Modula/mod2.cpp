#include <iostream>
using namespace std;

string mes(int a){
	if(a>12 or a==0)
		return "erro";
	else if(a==1)
		return "janeiro";
	else if(a==2)
		return "fevereiro";
	else if(a==3)
		return "marco";
	else if(a==4)
		return "abril";
	else if(a==5)
		return "maio";
	else if(a==6)
		return "junho";
	else if(a==7)
		return "julho";
	else if(a==8)
		return "agosto";
	else if(a==9)
		return "setembro";
	else if(a==10)
		return "outubro";
	else if(a==11)
		return "novembro";
	else 
		return "dezembro";
}

				

int main(){
	int a;
	cin>>a;
	cout<<mes(a)<<endl;
    
    return 0;
}

		

#include <iostream>
using namespace std;

void simp(int num, int den){
	int cont=0;
	int arm=1;
	int div1, div2;
	
	while(cont<arm){
		cont++;
		if(num%cont==0 and den%cont==0){
			div1=num/cont;
			div2=den/cont;
			arm=div2;
		}
	}	
	cout<<div1<<"\n"<<arm<<endl;;		
}

int main(){
	int n, d;
	cin>>n>>d;
	simp(n,d);
	return 0;
}
			
	

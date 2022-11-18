#include <iostream>
using namespace std;

float fatorial(int a){
	int cont=1;
	
	if(a==0)
		return 1;
	else if(a>cont)
		cont++;
	return a*fatorial(a-1);
}	
	

int main(){
	int a;
	cin>>a;
	cout<<fatorial(a)<<endl;
	return 0;
}
			
	

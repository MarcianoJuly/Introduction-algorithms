#include <iostream>
using namespace std;

int m(int a, int b){
	if(a==1){
		return b;
	}
	else if(a>=1){
		a--;
	}
		
	return b+m(a,b);
}

int main(){
	int a, b;
	cin>>a>>b;
	cout<<m(a,b)<<endl;
	return 0;
}
	

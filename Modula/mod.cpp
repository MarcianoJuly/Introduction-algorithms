#include <iostream>
using namespace std;

int fatorial(int n){
	
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}else{
	return n*fatorial(n-2);
	}	
}

int main(){
	int n;
	cin>>n;
	cout<<fatorial(n)<<endl;
	return 0;
}
	

#include <iostream>
using namespace std;

int fibo(int n){
	
	if(n==1){
		cout<<1<<" ";
	}else if(n==2){
		cout<<1<<" ";
	}else if(n==3){
		cout<<2<<" ";
	}
	else{
		return fibo(n-1)+fibo(n-2)+fibo(n-3);
	}
}

int main(){
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;
}
	
	

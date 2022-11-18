#include <iostream>
using namespace std;

int rici(int f, int f1, int n, int ant){
	int fn;
	if(n>=ant){
		fn=f+f1;
		f=fn;
		fn=f;
		
	}
	cout<<fn<<" ";
	ant++;
	return rici(f,f1,n,ant);
}

int main(){
	int a, b, c,ant;
	ant=2;
	cin>>a>>b>>c;
	
	cout<<rici(a,b,c,ant)<<endl;
	return 0;
}
	

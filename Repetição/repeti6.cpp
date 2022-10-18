#include <iostream>
using namespace std;

int main(){
    int n, fibn=0, fib1, fib2;
	int cont=2;
	
    cin>> n;
    fib1=0;
    fib2=1;
    if(n==1){
        cout<<fib1<<endl;
    }else if(n==2){
        cout<<fib1<<endl<<fib2<<endl;
	}
	else{
         cout<<fib1<<endl<<fib2<<endl;
	}
	
        while(cont<n){
            fibn=fib1+fib2;
            cout<< fibn<<endl;
            
            fib1=fib2;
            fib2=fibn;
            cont++;
        }
    return 0;
}

#include <iostream>
using namespace std;

int main() {	
	int divi, divisor;
	int quantidade=0;
	cin>>divi>>divisor;
	do{
	quantidade++;
	}while(divi>divisor);
	cout<<quantidade<<endl;
	return 0;
}
	

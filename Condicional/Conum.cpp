#include <iostream>
using namespace std;

int main(){
	int dividendo, divisor;
	cin>>dividendo>>divisor;
		if ((dividendo >= divisor) and (divisor!=0)){
			int div= dividendo/divisor;
			int resto= dividendo-(div*divisor);
			cout<<div<<"\n"<<resto<<endl;
		}
		else{
			cout<<"erro"<<endl;
		}
	return 0;
}

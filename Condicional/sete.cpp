#include <iostream>
using namespace std;

int main() {
	int pago, preco;
	cin>> pago;
	cin>>preco;
	int troco = pago-preco;
		int quantidade1= troco/20;
			cout<< quantidade1<< endl;
			
		int quantidade2= (troco-(quantidade1*20))/10;
			cout<<quantidade2<<endl;
			
	int	troco2 =troco-(quantidade2*10+quantidade1*20);
		int quantidade3=troco2/5;	
			cout<<quantidade3<<endl;
			
		int quantidade4=(troco2-(quantidade3*5))/2;
			cout<<quantidade4<<endl;
			
	int resto=troco-(quantidade1*20+quantidade2*10+quantidade3*5+quantidade4*2);
		cout<<resto<<endl;
			
	return 0;
}

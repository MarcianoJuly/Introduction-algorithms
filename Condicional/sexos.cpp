#include <iostream>
using namespace std;

int main(){
	char sexo;
	float H, peso;
	
	cin>>sexo>>H;
	switch(sexo) {
		case 'M' :
			peso=((72.7 * H) - 58);
			cout<<peso<<endl;
		break;
		case 'F' :
			peso=((62.1 * H) - 44.7);
			cout<<peso<<endl;
		break;
	}
	
	return 0;
}
			
	
	
	

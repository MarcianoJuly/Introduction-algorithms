#include <iostream>
using namespace std;

int main() {
	int grana;
	cin>> grana;
		int cem=grana/100;
		cout<<cem<<endl;
	
		int cinq=(grana-(cem*100))/50;
		cout<<cinq<<endl;
		
		int vint=(grana-((cinq*50)+(cem*100)))/20;
		cout<<vint<<endl;
		
		int dez=(grana-((cinq*50)+(cem*100)+(vint*20)))/10;
		cout<<dez<<endl;
		
		int cin=(grana-((cinq*50)+(cem*100)+(vint*20)+(dez*10)))/5;
		cout<<cin<<endl;
		
		int dos=(grana-((cinq*50)+(cem*100)+(vint*20)+(dez*10)+(cin*5)))/2;
		cout<<dos<<endl;
		
		int resto=(grana-((cinq*50)+(cem*100)+(vint*20)+(dez*10)+(cin*5)+(dos*2)));
		cout<<resto<<endl;
	return 0;
}

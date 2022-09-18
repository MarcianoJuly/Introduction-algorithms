#include <iostream>
using namespace std;

int main() {
	float math, nat, cod, red, hum, nota;
	
	cin>>math>>nat>>cod>>red>>hum;
	if (red>=200){
		nota =((math*3)+(nat*2)+(cod*2)+(red*2)+hum)/(3+2+2+2+1);
		cout<<nota<<endl;
	}
	else{
		cout<< "-1" <<endl;
	}
	return 0;
}
		
		
	
	
	

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	float mili;
	cin>>mili;
		int horas= mili/3600000;
		 int minutos=(mili-(horas*3600000))/60000;
		  float segundos=(mili-((minutos*60000)+(horas*3600000)))/1000;
		 std::cout << std::fixed<< std::setprecision(1);
		 cout<< horas << " : "<< minutos<< " : "<<segundos<<endl;
	return 0;
}
		

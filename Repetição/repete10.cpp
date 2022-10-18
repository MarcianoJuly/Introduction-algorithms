#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	const double pi=3.14159265358;
	int cadeira, contador=1;
	float raio, x, y, angulo;
	
	cin>>raio>>cadeira;
	angulo=360/cadeira;
	x=raio;
	y=0.0;
	cout<< fixed<< setprecision(2)<<x<<" "<<y<<endl;
	while(contador<cadeira){
		x=raio*cos(pi* angulo*contador/180);
		y=raio*sin(pi* angulo*contador/180);
		cout<< fixed<< setprecision(2)<<x<<" "<<y<<endl;
		contador++;
	}
	return 0;
}
	


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float degrauCM, altura;
	cin>>degrauCM>> altura;
	float conversor= altura*100;
	float quantidade= conversor/degrauCM;
	cout<<ceil(quantidade)<< endl;
	return 0;
}

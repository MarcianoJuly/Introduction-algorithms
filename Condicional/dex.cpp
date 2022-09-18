#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	float comprimento;
	cin>> comprimento;
	 float velocidade = 14.6*sqrt(comprimento);
	 std::cout << std::fixed<< std::setprecision(3);
	  cout<< velocidade<<endl;
	  return 0;
} 

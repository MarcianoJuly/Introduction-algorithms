#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
const float dolar = 2.13;
const float euro = 2.84;
const float libra = 3.34;
float salario, eua, usa, reino;
	cin >> salario;
		usa = salario/dolar;
		eua = salario/euro;
		reino = salario/libra;
	std::cout << std::fixed<< std::setprecision(2);
	cout << usa<< "\n";
	cout << eua<< "\n";
	cout << reino<<endl;
return 0;
}	

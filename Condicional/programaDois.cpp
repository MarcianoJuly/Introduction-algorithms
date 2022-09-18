#include <iostream>
using namespace std;
int main()
{
float minimo , horas , salario, bruto ,imposto;
	cin >> minimo>>horas;
	bruto   =minimo*0.05*horas;
	imposto =bruto*0.23;
	salario =(bruto-imposto);
	cout << salario <<endl;
	return 0;
}

//Programa desenvolvido por Gabriel Silva - 201920261 - 10B.
#include <iostream>
using namespace std;

int main() {
	int dimensao,linhas = 1,colunas=1;
	char branco = '.',preto = '#';
	cin >> dimensao;
	while(linhas <= dimensao) {
		colunas = 1;
		if(linhas % 2 != 0) {
			while(colunas <= dimensao) {
				if(colunas % 2 != 0) {
					cout << branco;
				}else {
					cout << preto;
				}
				colunas++;
			}
		}else {
			while(colunas <= dimensao) {
				if(colunas % 2 != 0) {
					cout << preto;
				}else {
					cout << branco;
				}
				colunas++;
			}
		}
		linhas++;
		cout << endl;	
	}
	return 0;
}
	
	

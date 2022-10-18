#include <iostream>
using namespace std;

int main(){    
    char fruta;
    string saida;
    
    cout<<"Escolha uma fruta: b.banana, c.caju, m.manga, u.uva"<<endl;
    cin>>fruta;
    
    switch (fruta){
        case 'b': 
            saida="banana";
            break;
        case 'm':
            saida="manga";
            break;
        case 'u':
            saida="uva";
            break;
        case 'c':
            saida="caju";
            break;
        default:
            saida="Nenhuma fruta";
    }
    cout<<"Você escolheu a fruta "<<saida<<endl;
    return 0;
}

		

	

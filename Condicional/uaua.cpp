#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int codigo;
	float pesokg, pesog;
	int pais;
	float precoB, imposto, precoT;
	
	std::cout<<std::fixed<<std::setprecision(1);
	cin>>codigo>>pesokg>>pais;
	pesog=1000*pesokg;
	if(codigo>=8){
		if(pais==1){
				precoB=pesog*35;
				imposto=0;
				precoT=imposto+precoB;
				cout<<pesog<<"\n"<<precoB<<"\n"<<imposto<<"\n"<<precoT<<endl;
		}
			else if(pais==2){
					precoB=pesog*35;
					imposto=precoB*0.15;
					precoT=imposto+precoB;
					cout<<pesog<<"\n"<<precoB<<"\n"<<imposto<<"\n"<<precoT<<endl;
			}
				else if(pais==3){
					precoB=pesog*35;
					imposto=precoB*0.25;
					precoT=imposto+precoB;
					cout<<pesog<<"\n"<<precoB<<"\n"<<imposto<<"\n"<<precoT<<endl;
				}
	}
	
	else if(codigo>=5){
		if(pais==1){
				precoB=pesog*25;
				imposto=0;
				precoT=imposto+precoB;
				cout<<pesog<<"\n"<<precoB<<"\n"<<imposto<<"\n"<<precoT<<endl;
		}
			else if(pais==2){
					precoB=pesog*25;
					imposto=precoB*0.15;
					precoT=imposto+precoB;
					cout<<pesog<<"\n"<<precoB<<"\n"<<imposto<<"\n"<<precoT<<endl;
			}
				else if(pais==3){
					precoB=pesog*25;
					imposto=precoB*0.25;
					precoT=imposto+precoB;
					cout<<pesog<<"\n"<<precoB<<"\n"<<imposto<<"\n"<<precoT<<endl;
				}
	}
	
	else if(codigo>=1){
		if(pais==1){
				precoB=pesog*10;
				imposto=0;
				precoT=imposto+precoB;
				cout<<pesog<<"\n"<<precoB<<"\n"<<imposto<<"\n"<<precoT<<endl;
		}
			else if(pais==2){
					precoB=pesog*10;
					imposto=precoB*0.15;
					precoT=imposto+precoB;
					cout<<pesog<<"\n"<<precoB<<"\n"<<imposto<<"\n"<<precoT<<endl;
			}
				else if(pais==3){
					precoB=pesog*10;
					imposto=precoB*0.25;
					precoT=imposto+precoB;
					cout<<pesog<<"\n"<<precoB<<"\n"<<imposto<<"\n"<<precoT<<endl;
				}
	}
	return 0;	
}	
			

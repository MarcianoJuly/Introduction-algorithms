#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,e;
	int questoes;
	int i=0;
	cin>>questoes;
	
	while(questoes!=0){
		i=0;	
		while(questoes>i){
			cin>>a>>b>>c>>d>>e;
				if(a<=127 and b>127 and c>127 and d>127 and e>127)
					cout<<"a"<<endl; 
				else if(b<=127 and a>127 and c>127 and d>127 and e>127)
					cout<<"b"<<endl;
				else if(c<=127 and a>127 and b>127 and d>127 and e>127)
					cout<<"c"<<endl;
				else if(d<=127 and a>127 and b>127 and c>127 and e>127)
					cout<<"d"<<endl; 
				else if(e<=127 and a>127 and b>127 and c>127 and d>127)
					cout<<"e"<<endl;
				else if(a==b or a==c or a==d or a==e or b==c or b==d or b==e or c==d or c==d or c==e or d==e or (a<=127 and b<=127 and c<=127 and d<=127 and e<=127))
					cout<<"*"<<endl;
				i++;
			}
		cin>>questoes;
		}
	return 0;
}
	
				
		

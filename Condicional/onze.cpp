#include <iostream>
using namespace std;

int main () {
	float x1;
	float y1;
	float x2;
	float y2;
	 cin>>x1;
	 cin>>y1;
	 cin>>x2;
	 cin>>y2;
		float m=(y2-y1)/(x2-x1);
		cout <<m<< endl;
		float q=y1-(m*x1);
		cout <<q<<endl;
	return 0;
}
		

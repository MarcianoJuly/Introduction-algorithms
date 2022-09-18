#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x1;
	float y1;
	float x2;
	float y2;
		cin>>x1;
		cin>>y1;
		cin>>x2;
		cin>>y2;
	float x= pow((x2-x1),2);
	float y= pow((y2-y1),2);
	float raiz = sqrt(x+y);
	cout<<raiz<<endl;
	return 0;
}
	

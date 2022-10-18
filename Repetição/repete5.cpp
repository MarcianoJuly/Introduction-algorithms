#include <iostream>
using namespace std;

int main(){
	int n, tri1,trin=0;
	
	cin>>n;
	tri1=1;
	while(1<=n){
		
		tri1=n+trin;
		trin=tri1;
		n--;		
	}
	cout<<trin<<endl;			
	return 0;
}

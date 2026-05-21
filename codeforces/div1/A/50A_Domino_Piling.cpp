#include <iostream>
using namespace std;
main(int m){
	int n,r,x,y;
	cin>>m>>n;
	if(m%2==0)r=(m/2)*n;
	else if(n%2==0)r=(n/2)*m;
	else{
		x=std::max(m,n);
		y=std::min(m,n);
		r=(x/2)*y+(y/2);	
	}
	cout<<r<<endl;
}

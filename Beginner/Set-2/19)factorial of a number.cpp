#include<iostream>
using namespace std;
int main(){
	double n,f=1;
	cin>>n;
	for(double i=1;i<=n;i++){
		f=f*i;
	}
	cout<<f;
	return 0;
}

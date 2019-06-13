#include<iostream>
using namespace std;
int main(){
	int n,r=0,t;
	cin>>n;
	while(n>0){
		t=n%10;
		r=(r*10)+t;
		n=n/10;
	}
	cout<<r;
	return 0;
}

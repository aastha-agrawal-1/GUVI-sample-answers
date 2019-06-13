#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	double f=1;
	cin>>n;
	if(n==0){
	  f=1;	
	}
	else{
	while(i<=n){
		f=f*i;
		i=i+1;
}
}
cout<<f;
}

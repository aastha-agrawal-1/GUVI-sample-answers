#include<iostream>
using namespace std;
int main(){
	double n,k,f=1;
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		f=f*n;
	}
	cout<<f;
	return 0;
}


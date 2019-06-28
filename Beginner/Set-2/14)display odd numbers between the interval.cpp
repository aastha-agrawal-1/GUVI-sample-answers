#include<iostream>
using namespace std;
int main(){
	 long int n,q;
	cin>>n>>q;
	for(long int i=n+1;i<q;i++){
		if(i%2!=0)
		cout<<i<<" ";
	}
	return 0;
}

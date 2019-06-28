#include<iostream>
using namespace std;
int main(){
	long int a,b;
	cin>>a>>b;
	for(long int i=a+1;i<b;i++){
		if(i%2==0)
		cout<<i<<" ";
	}
	return 0;
}

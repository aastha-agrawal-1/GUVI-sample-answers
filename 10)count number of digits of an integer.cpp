#include<iostream>
using namespace std;
int main(){
	int n,digit=0;
	cin>>n;
	while(n>0){
		digit+=1;
		n=n/10;
		}
	cout<<digit;
	return 0;
}

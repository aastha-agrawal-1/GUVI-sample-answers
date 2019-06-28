#include<iostream>
using namespace std;
int main(){
	int n,c=0;
	cin>>n;
	if((n%1==0)&&(n%n==0)){
		for(int i=2;i<=n-1;i++){
			if(n%i==0){
				c+=1;
				break;
			}
		}
	}
	if(c>0)
	cout<<"no";
	else
	cout<<"yes";
}

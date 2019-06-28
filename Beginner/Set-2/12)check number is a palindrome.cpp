#include<iostream>
using namespace std;
int main(){
	int n,array[1000],c=0,i=0,t=0;
	cin>>n;
	while(n>0){
		array[i]=n%10;
		n=n/10;
		i+=1;
		c+=1;
	}
	for(int j=0;j<c/2;j++){
		if(array[j]==array[c-j-1]){
			t+=1;
		}
	}
	if(t==c/2)
	cout<<"yes";
	else
	cout<<"no";
	return 0;
	}

#include<iostream>
using namespace std;
long int expo(int num,int k){
	long int f=1;
	for(long int i=1;i<=k;i++){
		f=f*num;
	}
	return f;
}
int main(){
	long int n,temp,sum=0;
	int c=0,r;
	cin>>n;
	temp=n;
	while(temp>0){
		temp=temp/10;
		c+=1;
	}
	temp=n;
	while(temp>0){
		r=temp%10;
		sum=sum+expo(r,c);
		temp=temp/10;
	}
	if(sum==n)
	cout<<"yes";
	else
	cout<<"no";
	return 0;
    
}

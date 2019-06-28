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
	long int a,b,temp;
	cin>>a>>b;
	for(long int i=a+1;i<b;i++){
	   int c=0,r;
	   long int sum=0;
    	temp=i;
	while(temp>0){
		temp=temp/10;
		c+=1;
	}
	temp=i;
	while(temp>0){
		r=temp%10;
		sum=sum+expo(r,c);
		temp=temp/10;
	}
	if(sum==i)
	cout<<i<<" ";
		}
		return 0;
}

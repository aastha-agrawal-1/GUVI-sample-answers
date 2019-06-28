#include<iostream>
using namespace std;
int main(){
	long int a,b;
	cin>>a>>b;
	for(long int i=a+1;i<b;i++){
		int c=0;
		if((i%1==0)&&(i%i==0)){
		    for(int j=2;j<i;j++){
		    	if(i%j==0)
		    	c+=1;
			}	
		}
		if((c==0)||(i==2))
		cout<<i<<" ";
	}
	return 0;
	
	
}

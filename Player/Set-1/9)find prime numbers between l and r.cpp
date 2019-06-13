#include<iostream>
using namespace std;
int main(){
	long int l,r,d;
	int c=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		if(i==2){
			c=c+1;
		}
		else{
		 d=0;
		if((i%1==0)&&(i%i==0)){
			for(int j=2;j<=r;j++){
				if(i%j==0){
					d+=1;
				}
			}
		}
		}
		if(d==1){
			c+=1;
	}
}
	cout<<c;
	return 0;
}

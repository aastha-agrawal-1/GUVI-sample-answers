#include<iostream>
using namespace std;
int main(){
	int n,k,sum=0;
	cin>>n>>k;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	for(int i=0;i<k;i++){
		sum=sum+array[i];
	}
	cout<<sum;
	return 0;
}

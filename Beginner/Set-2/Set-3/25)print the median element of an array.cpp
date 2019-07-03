#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	sort(array,array+n);
	if(n%2!=0)
	   cout<<array[n/2];
	else{
		float median;
		median=(float)(array[n/2]+array[(n/2)+1])/2;
		cout<<median;
	}
return 0;	
}

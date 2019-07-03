#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	sort(array,array+n);
	cout<<array[0];
}

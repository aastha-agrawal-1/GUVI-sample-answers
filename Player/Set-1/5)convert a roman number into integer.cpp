#include<iostream>
using namespace std;
int main(){
	string array[20]={"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX"};
	string n;
	int i;
	cin>>n;
	for(i=0;i<20;i++){
		if(array[i]==n){
			cout<<i+1;
			break;
		}
}
}

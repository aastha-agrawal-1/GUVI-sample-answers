#include<iostream>
using namespace std;
int main(){
	string s1,s2;
	int c=0;
	cin>>s1>>s2;
	for(int i=0;i<(max(s1.length(),s2.length()));i++){
		if(s1[i]!=s2[i]){
			c+=1;
		}
	}
	if(c==1){
		cout<<"yes";
	}
	else
	cout<<"no";
	return 0;
}

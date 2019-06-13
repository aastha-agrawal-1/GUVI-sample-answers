#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i=i+2){
		char temp=s[i];
		s[i]=s[i+1];
		s[i+1]=temp;
	}
	cout<<s;
	return 0;
}

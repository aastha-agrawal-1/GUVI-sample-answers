#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	s[0]=char(int(s[0])-32);
	for(int i=1;i<s.length();i++){
		if(s[i]==' '){
			s[i+1]=char(int(s[i+1])-32);
		}
	}
	cout<<s;
	return 0;
}

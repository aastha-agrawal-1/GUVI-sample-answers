#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
	char c;
	cin>>c;
	if(typeid(c)!=typeid(char)){
		cout<<"Invalid";
	}
	else{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
		cout<<"Vowel";
	}
	else 
	cout<<"Consonant";
}
}

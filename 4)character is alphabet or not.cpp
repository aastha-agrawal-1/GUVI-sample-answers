#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
	char c;
	cin>>c;
	if(typeid(c)!=typeid(char)){
		cout<<"No";
	}
	else{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
		cout<<"Alphabet";
}
}
}

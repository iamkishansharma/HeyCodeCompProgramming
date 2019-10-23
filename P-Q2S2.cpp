#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter Anything: ";
	cin>>ch;
	if(isalpha(ch)){
		cout<<ch<<"is an Alphabet.";
	}
	else{
		cout<<ch<<" is not an Alphabet";
	}
	return 0;
}

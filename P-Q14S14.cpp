#include<iostream>
using namespace std;
int main()
{
	int no,sum=0;
	cout<<"Enter number to check: ";
    cin>>no;
	int temp = no;
	
	while(no){
		int num = no % 10;
		int fact = 1;
		//finding factorial of each digit of input
		for(int i=num; i>0; i--){
			fact=fact*i;
		}
		sum += fact;
		no /= 10;
	}

	if(sum==temp){
		cout<<temp<<" is a Strong Number";
	}
	else{
		cout<<temp<<" is not a Strong Number";
	}
	return 0;
}
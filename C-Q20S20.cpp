#include<iostream>
using namespace std;
int main(){
	int yr;
	cout<<"Enter year :";
	cin>>yr;
	if((yr%4==0) && (yr%100!=0))
	{
		cout<<"This is a Leap Year";
	}
	else if((yr%100==0) && (yr%400==0))
	{
		cout<<"This is a Leap Year";
	}
	else if(yr%400==0)
	{
		cout<<"This is a Leap Year";
	}
	else
	{
		cout<<"This is not a Leap Year";
	}
	return 0;
}

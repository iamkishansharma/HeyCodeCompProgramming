#include<iostream>
using namespace std;

int main(){
    int no, fact=1, i;
    cout<<"Enter a Number to find Factorial: ";
    cin>>no;
    for (i = no; i > 0; i--){
        fact = fact * i;
    }
    cout<<"\nFactorial of "<<no<<" is "<<fact;
    return 0;
}

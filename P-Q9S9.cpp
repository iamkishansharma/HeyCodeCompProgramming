#include<iostream>
using namespace std;
int main(){
    int no,sum=0, digit;
    cout<<"Enter a Number: ";
    cin>>no;
    while(no!=0){
        digit = no%10;
        sum = sum+digit;
        no = no / 10;
    }
    cout<<"\nThe SUM of digits is: "<<sum;
    return 0;
}

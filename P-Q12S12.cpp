#include<iostream>
using namespace std;
int main(){
    int no, reversedNumber = 0, remainder;
    cout<<"Enter a Number: ";
    cin>>no;
    while (no != 0)
    {
        remainder = no % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        no = no / 10;
    }
    cout<<"\nReversed Number is "<<reversedNumber;
    return 0;
}

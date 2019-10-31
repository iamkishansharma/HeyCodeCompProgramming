#include<iostream>
using namespace std;
int main(){
    int no, sum = 0;
    cout<<"Enter a Number: ";
    cin>>no;
    for(int i=1; i<=no; i++){
        sum = sum + i;
    }
    cout<<"\nSUM of Numbers upto "<<no<<" is "<<sum;
    return 0;
}

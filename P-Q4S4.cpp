#include<iostream>
using namespace std;

int main(){
    int no, count=0;
    cout<<"Enter a Number: ";
    cin>>no;
    while(no!=0){
        int a = no%10;
        count++;
        no = no/10;
    }
    cout<<"\nThere are "<<count<<" digits."<<endl;
    return 0;
}

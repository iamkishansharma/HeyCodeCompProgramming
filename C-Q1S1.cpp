#include<iostream>
using namespace std;

int main(){
    int no,i;
    cout<<"Enter a Number: ";
    cin>>no;
    for(i=1;i<=10;i++){
        cout<<no<<" X "<<i<<" = "<<no*i<<endl;
    }
    return 0;
}

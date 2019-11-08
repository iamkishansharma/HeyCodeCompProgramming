#include<iostream>
using namespace std;
int main(){
    int no, i;
    cout<<"Enter a Number: ";
    cin>>no;
    cout<<" \nFactors of "<<no<<" are ";
    for(i=1; i<=no; i++){
        if(no%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}

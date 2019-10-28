#include<iostream>
using namespace std;

int main(){
    int no;
    cout<<"Enter a Number: ";
    cin>>no;
    if(no==0){
        cout<<"\n"<<no<<" can be +ve or -ve.";
    }
    else if(no>0){
        cout<<"\n"<<no<<" is a Positive Number.";
    }
    else{
        cout << "\n"<< no << " is a Negative Number.";
    }
    return 0;
}

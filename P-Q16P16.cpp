#include<iostream>
using namespace std;
int main(){
    int no, pow;
    long long result = 1;
    cout<<"Enter the Base Number: ";
    cin>>no;
    cout<<"\nEnter the Power Number: ";
    cin>>pow;
    while(pow!=0){
        result = result * no;
        pow--;
    }
    cout<<"\nAnswer: "<<result;
    return 0;
}

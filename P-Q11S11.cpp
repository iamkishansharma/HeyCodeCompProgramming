#include<iostream>
using namespace std;
int main(){
    int no1, no2;
    int sum = 0;
    cout<<"Enter Two Numbers: ";
    cin>>no1>>no2;
    for (int i = no1; i <= no2; i++){
        sum = sum + i;
    }
    
    cout<<"\nSum of Numbers between "<<no1<<" and "<<no2<< " is "<<sum;
    return 0;
}
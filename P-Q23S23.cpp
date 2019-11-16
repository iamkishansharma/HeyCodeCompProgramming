#include<iostream>
using namespace std;

int main(){
    int no,i;
    cout<<"Enter the number : ";
    cin>>no;

    for(i = 2; i <= no/2; i++){
        if(n % i == 0){
            break;
        }
    }
    if(i > no/2)
        cout << no <<" is a Prime Number.";
    else
        cout << no <<" is not a Prime Number";
    return 0;
}

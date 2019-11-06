#include <iostream>
using namespace std; 

int main(){
    int no,i=1,sum=0;
    cout << "Enter a number: ";
    cin >> no;
    while(i<no){
        if(no%i==0){
            sum=sum+i;
        }
        i++; 
    }
    if(sum==no){
        cout << i << " is a perfect number\n"; 
    }
    else{
        cout << i << " is not a perfect number\n";
    }
    return 0;
}
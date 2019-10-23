#include<iostream>
using namespace std;

int main(){
    int no,i,j,k,l;
    cout<<"Enter Number: ";
    cin>>no;
    for (i = 1; i <= no; i++){
        k = (i%2 !=0)? i+1:i;
        for (j = no; j > k; j--){
            cout<<" ";
        }

        for (l = 0; l < k; l++){
            cout<<"* ";
        }
        cout<<endl; 
    }
    
    return 0;
}

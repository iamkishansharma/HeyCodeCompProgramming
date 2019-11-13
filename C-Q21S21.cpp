#include<iostream>
using namespace std;

int main(){
    int no;
    cout << "Enter Number: ";
    cin >> no;
    int binaryNo[32], i = 0;
    while(no > 0){
        binaryNo[i] = no % 2;
        no = no / 2;
        i++;
    }
    cout <<"\nThe Binary is ";
    for(int j=i-1; j>=0;j--){
        cout << binaryNo[j];
    }
    return 0;
}

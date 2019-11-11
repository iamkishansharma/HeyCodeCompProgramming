#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a Number:";
    cin>>no;

    int odd = 1;
    int sq = 0;
    int num = abs(no);
    while(num-- > 0){
        sq = sq + odd;
        odd = odd + 2;
    }
    cout<<"\nThe square of "<<no<<" is "<<sq;
    return 0;
}

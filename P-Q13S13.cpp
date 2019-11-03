#include <iostream>
using namespace std;
int main(){
    int no1, no2, lcm = 1;
    cout<<"Enter two Numbers: ";
    cin>>no1>>no2;
    int max = (no1 > no2)? no1 : no2;
    int i = max;
    while(1){
        if(i % no1 == 0 && i % no2 == 0){
            lcm = i;
            break;
        }
        i = i + max;
    }
    cout<<"\nLCM of "<<no1<<" and "<<no2<<" is "<<lcm;
    return 0;
}

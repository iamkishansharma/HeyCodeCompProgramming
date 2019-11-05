#include<iostream>
using namespace std;

int main(){
    int pSpentOnDVD = 12;
    int pDepositedInAccount = 100 - pSpentOnDVD;
    int rSpentonDVD = 42;
    /* $42 means 12% 
    so 1% = $(42/12) = $3.5
    weeklySavings = 88*3.5
    */
   float rFor1p = 42/12;
    int weeklySavings = pDepositedInAccount * rFor1p;

    cout<<"\nShe is saving: $"<<weeklySavings;
    return 0;
}
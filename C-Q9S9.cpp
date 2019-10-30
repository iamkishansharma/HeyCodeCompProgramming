#include<iostream>
using namespace std;
int main(){
    int miles = 2052;
    int days = 6;
    int noOfTowns = 2;
    int milesInOneDay = miles/days;
    float avgMiles = milesInOneDay/noOfTowns;
    cout<<"\nThe Girl drives average of "<<avgMiles*1.60934<<"KM between every stops.";
    return 0;    
}
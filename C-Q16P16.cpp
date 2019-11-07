#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int fishLengthArr[] = {12,13,8,10,17};
    int arrayLength = sizeof(fishLengthArr)/sizeof(fishLengthArr[0]);

    sort(fishLengthArr, fishLengthArr+arrayLength);
    int largestFishSize = fishLengthArr[(arrayLength)-1];

    cout<<"\nLargest fish size is "<<largestFishSize;
    return 0;
}

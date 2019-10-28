#include <iostream>
using namespace std;

float avgWork(int a, int b, int c, int d, int e, int f, int count){
    float totalHour = a+b+c+d+e+f;
    return float(totalHour/count);
}
int main()
{
    int nHoward=8, nPease=10, nCampbell=9, nGrace=8, nCarthy=7, nMurphy=10, nCount=6;
    float answer = avgWork(nHoward, nPease, nCampbell, nGrace, nCarthy, nMurphy, nCount);
    cout<<"\nThe average hour is "<<answer;
    return 0;
}

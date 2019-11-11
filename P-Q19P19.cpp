#include<iostream>
using namespace std;

int min(int x, int y){
    return (x>y)? y : x;
}
int calcAngle (double h, double m){
    if(h<0||m<0||h>12||m>60){
        cout<<"\nWrong Input";
    }
    if(h==12)h=0;
    if(m==60)m=0;
    int hourAngle = 0.5*(h*60 + m);
    int minuteAngle = 6*m;

    int angle = abs(hourAngle-minuteAngle);
    angle = min(360-angle, angle);
    return angle;
}
int main (){
    int hour;
    int minute;
    cout<<"Enter hour (0-12):";
    cin>>hour;
    cout<<"\nEnter minute (0-59): ";
    cin>>minute;
    int clockAngle = calcAngle(hour, minute);
    if(clockAngle == 0){
        cout<<"\nHour & Minute hands overlaps";
    }
    else{
        cout<<clockAngle<<" degree";
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int redBloodCorpucles = 5000000;
    int whiteBloodCorpucles = 8000;
    
    int count = 0;
    while(whiteBloodCorpucles<=redBloodCorpucles){
        redBloodCorpucles-=whiteBloodCorpucles;
        count++;
    }
    cout<<"\nThe ratio W:R is 1:"<<count;
    return 0;
}

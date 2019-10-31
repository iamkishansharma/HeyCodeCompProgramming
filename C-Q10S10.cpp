#include<iostream>
using namespace std;
int main(){
    int movieOne = 100;//in minutes
    int movieTwo = 110;//in minutes
    int bothWatched = movieOne + movieTwo;
    int count=0;
     while(bothWatched>60){
         bothWatched-=60;
         count++;
     }

     cout<<"\nDanny took "<<count<<" hours and "<<bothWatched<<" minutes to watch both movies.";
     return 0;
}

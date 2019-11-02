#include <iostream>
using namespace std;
int main(){
    int karasRate = 5, ranisRate = 7;
    int k, r;
    //k for kara's number of glasses and r for rani's

    cout<<"\nEnter Kara's Glass count: ";
    cin>>k;
    cout<<"\nEnter Rani's Glass count: ";
    cin>>r;
    int karasMoney = k*karasRate;
    int ranisMoney =  r*ranisRate;
    
    if(karasMoney>ranisMoney){
        cout << "\nKara made most money. " << karasMoney - ranisMoney << " cents more than Rani made.";
    }
    else if(karasMoney<ranisMoney){
        cout << "\nRani made most money. " << ranisMoney - karasMoney << " cents more than Kara made.";
    }
    else{
        cout << "\nKara and Rani both made" << ranisMoney << " cents same amount of money.";
    }
    return 0;
}

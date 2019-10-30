#include<iostream>
using namespace std;
int main(){
    int sP = 68, sC = 3;
    int cP = 75, cC = 1;
    int bP = 43, bC = 2;
    int returnedBracelet = 1, rebateOnComputerGame = 10;
    
    int totalGiftPrice = (sP*sC)+(cp*cC)+(bP*bC);
    int discountAndRebate = (bP*returnedBracelet)+rebateOnComputerGame;
    cout << "\nFinal Gift price is" << totalGiftPrice - discountAndRebate;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int totalNoOfHotDogs = 400;
    int noOfHotDogs = 8;
    int noOfPackets=0;
    while (totalNoOfHotDogs >= noOfHotDogs){
        totalNoOfHotDogs = totalNoOfHotDogs - noOfHotDogs;
        noOfPackets++;
    }
    cout << "\nJack bought " << noOfPackets << " Packets of Hot Dogs." << endl;
    return 0;
}

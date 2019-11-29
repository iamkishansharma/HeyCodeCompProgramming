#include<iostream>
using namespace std;
int main(){
  int row, col, no;

  cout<<"Enter the number of rows in pyramid of stars to print\n";
  cin>>no;

  for (row = 1; row <= no; row++)  // Loop to print rows
  {
    for (col = 1; col <= no-row; col++){  // Loop to print spaces in a row
      cout<<" ";
    }

    for (col = 1; col <= 2*row - 1; col++){ // Loop to print stars in a row
      cout<<"\n";
    }
    cout<<endl;
  }

  return 0;
}

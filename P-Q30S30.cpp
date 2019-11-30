#include <iostream>
using namespace std;

int main(){
  int row, c, n;
  cout<<"Enter the number: ";
  cin>>n;

  for (row = 1; row <= n; row++)  // Loop to print rows
  {
    for (c = 1; c <= n-row; c++)  // Loop to print spaces in a row
      cout<<" ";

    for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
      cout<<c;
    cout<<endl;
  }
  return 0;
}

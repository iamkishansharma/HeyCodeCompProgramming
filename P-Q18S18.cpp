#include <iostream>
using namespace std;
int main()
{
int a, b,c,d,x,y,i,gcd;
cout << “\nEnter the numerator for 1st number : “;
cin >> a;
cout << “\nEnter the denominator for 1st number : “;
cin >> b;
cout << “\nEnter the numerator for 2nd number : “;
cin >> c;
cout << “\nEnter the denominator for 2nd number : “;
cin >> d;
x=(a*d)+(b*c); //numerator
y=b*d; //denominator
// Trick part. Reduce it to the simplest form by using gcd.
for(i=1; i <= x && i <= y; ++i)
{
if(x%i==0 && y%i==0)
gcd = i;
}
cout << “\nThe added fraction is “<<x/gcd << “/”<<y/gcd;
cout << endl;
return 0;
}

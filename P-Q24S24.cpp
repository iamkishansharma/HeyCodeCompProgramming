#include <iostream>
using namespace std;

int main(){
    int n, reverse = 0, remainder, number;

    cout << “Enter an integer: “;
    cin >> n;

    number = n;

    while( n!=0 ){
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n /= 10;
    }

    if (number == reverse)
        cout << number << ” is a palindrome\n”;
    else
        cout << number << ” is not a palindrome\n”;

    return 0;
}

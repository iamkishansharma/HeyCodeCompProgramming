#include<iostream>
using namespace std;

int sum_of_two_primes(int n);
int main(){
    int n, i;

    cout << “Enter the number: “;
    cin >> n;
    int flag = 0;
    for(i = 2; i <= n/2; ++i){
        // condition for i to be prime
        if (sum_of_two_primes(i) == 1){

            if (sum_of_two_primes(n-i) == 1){
                cout << n << ” can be expressed as the sum of ” << i << ” and ” << n-i << endl;
                flag = 1;
            }
        }
    }

    if (flag == 0)
    cout << n << ” cannot be expressed as the sum of two prime numbers\n”;

    return 0;
}

int sum_of_two_primes(int n){
    int i, isPrime = 1;
    for(i = 2; i <= n/2; ++i){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

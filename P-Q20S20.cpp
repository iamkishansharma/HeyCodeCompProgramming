#include
#include using namespace std;

int main()
{
int no, temp, remainder, result = 0, n = 0 ;

cout << “Enter an integer : “;
cin >> no;

temp = no;

// Finding the number of digits

while (temp != 0)
{
temp = temp / 10;
n++;
}

temp = no;

// Checking if the number is armstrong

while (temp != 0)
{
remainder = temp%10;
result += pow(remainder, n);
temp /= 10;
}

if(result == no)
cout << number << ” is an Armstrong number\n”;
else
cout << no << ” is not an Armstrong number\n”;

return 0;
}

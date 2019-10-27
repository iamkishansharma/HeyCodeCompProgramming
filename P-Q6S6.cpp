#include <iostream>
using namespace std;

int main()
{
    int no, i;
    int a = -1, b = 1, c;
    cout << "Enter a Number: ";
    cin >> no;
    for (i = 0; i <= no; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}
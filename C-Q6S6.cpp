#include <iostream>
using namespace std;
int multiply(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else if (b > 0)
    {
        return (a + multiply(a, b - 1));
    }
    else
    {
        return (-multiply(a, -b));
    }
}

int main()
{
    int noOfPeopleInOneDay = 1200000;
    int oneYearDays = 365;
    cout << "\nThe Bus System carries " << multiply(noOfPeopleInOneDay, oneYearDays) << " people in One Year.";
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter X & Y Co-Ordinates(Int): ";
    cin >> a >> b;
    if(a > 0 && b > 0)
        cout << “Ist Quadrant”;
    else if(a < 0 && b > 0)
        cout << “IInd Quadrant”;
    else if(a < 0 && b < 0)
        cout << “IIIrd Quadrant”;
    else if(a > 0 && b < 0)
        cout << “IVth Quadrant”;
    else
        cout << “Origin”;
    return 0;
}

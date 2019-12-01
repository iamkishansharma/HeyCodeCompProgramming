#include <iostream>
using namespace std;
int main(){
    int i, j, k, space, n;
    cin >> n;
    cout << ” “;
    for (i=1; i<=n; i++){
        for (j=1; j<=n-i; j++){
        cout << ” “;
        }
        for (j=1,k=2*i-1; j<=2*i-1; j++,k–){
            if (j <= k)
                cout << j;
            else
                cout << k;
        }
    cout << endl;
    cout << ” “;
    }
    return 0;
}

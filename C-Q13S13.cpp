#include <bits/stdc++.h>
using namespace std;

void allCombination(string arr[], int size){
    sort(arr, arr + size);
    cout<<" Possible Combinations:\n";
    do{
        for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
		}
		cout << "\n";
	
    }while(next_permutation(arr,arr + size));
}
int main(){
    string studentArr[] = {"Ram", "Anuj", "Deepak", "Ravi"};
    int size = sizeof(studentArr) / sizeof(studentArr[0]);
    allCombination(studentArr, size);
    return 0;
}

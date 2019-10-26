#include<iostream>
using namespace std;

#define len(x) (sizeof(x)/sizeof(x[0]))

int main(){
    int arr[7] ={66,57,54,53,64,52,59};
    for (int i = 0; i < len(arr); i++)
    {
        for(int j = 0; j < len(arr)-i-1; j++){
        	
			if(arr[j]>arr[j+1]){
				
        		int temp;
        		temp = arr[j];
        		arr[j] = arr[j+1];
        		arr[j+1] = temp;
			}
		}
    }

    int max = 0;
    for (int k = 0; k < len(arr); k++){
        if(max<arr[k]){
            max = arr[k];
        }
    }
    cout<<"\nThe maximum second is "<<max;    
}

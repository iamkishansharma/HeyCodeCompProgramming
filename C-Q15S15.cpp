#include<iostream>
#include<map>
#include<sstream>
#include<iterator>
using namespace std;

void printStringDuplicate(string s, int length){
    string arr[length];
    int i=0;
    std::map<string, bool> duplicateMap;
    stringstream ssin(s);
    while(ssin.good() && i<length){
        ssin>>arr[i];
        i++;
    }

    for(i=0; i<length; i++){
        if(duplicateMap.find(arr[i]) == duplicateMap.end()){
            duplicateMap.insert(pair<string, bool>(arr[i], false));
        }else{
            duplicateMap[arr[i]] = true;
        }
    }

    map<string, bool>::iterator itr;
    for(itr = duplicateMap.begin(); itr != duplicateMap.end(); ++itr){
        if(itr->second == true){
            cout<<itr->first<<" ";
        }
    }
}


int main(){
    string students = "Kishan Ankur Deepak Kishan Deepak Amit Ankit Vansh Kishan Sharma";
    int length = 10;
    printStringDuplicate(students, length);
    return 0;  
}

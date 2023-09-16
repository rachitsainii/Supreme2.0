#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool keyPair(int arr[], int x){
    for(int i = 0; i < 6; i++){
        for(int j = i+1; j < 6; j++){
            if(arr[i] + arr[j] == x){
                return true;
            }
        }
    }
    return false;
}

int main(){
    
    int arr[5] = {1,2,4,3,6};

    int x = 10;
    
    int ans = keyPair(arr, x);
    if (ans == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    

    return 0;
}
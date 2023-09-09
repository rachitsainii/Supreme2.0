#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {20, 4, 15, 2, 6, 8, 11};
    int min = INT_MAX;
    for (int i = 0; i < 7; i++){
        if (arr[i] < min){
            min = arr[i];
        } else {
            continue;
        }
    }

    cout << min << endl;
    return 0;
}
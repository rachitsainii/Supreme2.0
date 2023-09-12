#include<iostream>
using namespace std;

int main(){

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    int last_element = arr[n-1];
    for (int i = n-1; i >= 0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = last_element;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
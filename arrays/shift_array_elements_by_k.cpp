#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;
    while (k > 0){
        int last_element = arr[n-1];
        for (int i = n-1; i >= 0; i--){
            arr[i] = arr[i-1];
        }

        arr[0] = last_element;
        k--;

    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
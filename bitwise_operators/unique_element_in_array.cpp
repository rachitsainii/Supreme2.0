#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1,1,2,2,3,4,5,5,6,6};
    int temp = arr[0];
    for (int i = 1; i < 11; i ++){
        temp = temp ^ arr[i];
    }
    cout << temp << endl;
    return 0;
}
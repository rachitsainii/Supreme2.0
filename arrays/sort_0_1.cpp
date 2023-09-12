#include<iostream>
using namespace std;

int main(){

    int arr[] = {0,1,0,1,1,0,0,0,0};
    int count_0 = 0;
    int count_1 = 0;
    for(int i = 0; i < 9; i++){
        if(arr[i] == 0){
            count_0 ++;
        } else {
            count_1 ++;
        }
    }

    int j = 0;
    while(count_0 > 0){
        arr[j] = 0;
        j++; 
        count_0--;
    }

    while(count_1 > 0){
        arr[j] = 1;
        j++;
        count_1--;
    }

    for(int i = 0; i < j; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
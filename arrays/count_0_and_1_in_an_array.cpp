#include<iostream>
using namespace std;

int main(){
    int arr [] = {0,1,1,1,0,0,1,1};
    int count_0 = 0;
    int count_1 = 0;
    for (int i = 0; i < 8; i++){
        if (arr[i] == 0){
            count_0 += 1; 
        } else {
            count_1 += 1;
        }
    }

    cout << "The number of 0s in the array are :" << count_0 << endl;
    cout << "The number of 1s in the array are :" << count_1 << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

int findMax(int arr[][3], int row, int col){
    int max_num = INT_MIN;
    for(int i = 0; i < row; i++){
        for(int j =0; j < col; j++){
            if(arr[i][j] > max_num){
                max_num = arr[i][j];
            } else {
                continue;
            }
        }
    }
    return max_num;
}

int main(){

    int arr[3][3] = {{10,20,30},
                     {40,50,60}, 
                     {70,80,90}};
    
    int ans  = findMax(arr, 3,3);
    cout << ans << endl;

    return 0;
}
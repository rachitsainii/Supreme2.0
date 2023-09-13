#include<iostream>
using namespace std;

int findMin(int arr[][3], int row, int col){
    int min_num = INT_MAX;
    for(int i = 0; i < row; i++){
        for(int j =0; j < col; j++){
            if(arr[i][j] <  min_num){
                min_num = arr[i][j];
            } else {
                continue;
            }
        }
    }
    return min_num;
}

int main(){

    int arr[3][3] = {{-10,20,30},
                     {40,50,60}, 
                     {70,80,90}};
    
    int ans  = findMin(arr, 3,3);
    cout << ans << endl;

    return 0;
}
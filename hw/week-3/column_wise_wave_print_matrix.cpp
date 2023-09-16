#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<vector<int>> matrix = {{1,2,3}, 
                                  {4,5,6}, 
                                  {7,8,9}};
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++){
        if( i % 2 == 0){
            for(int j = 0; j < m; j++){
                cout << matrix[j][i] << " ";
            } 
        }else {
            for(int k = m-1; k >= 0; k--){
            cout << matrix[k][i] << " ";
            }
        }
    }


    return 0;
}
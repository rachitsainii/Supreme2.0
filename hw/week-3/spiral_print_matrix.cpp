#include<iostream>
#include<vector>
using namespace std;

int main(){


    // vector<vector<int>> matrix = {{1,2,3}, 
    //                               {4,5,6}, 
    //                               {7,8,9}};

    vector<vector<int>> matrix = {{1,2,3,4}, 
                                  {5,6,7,8}, 
                                  {9,10,11,12},
                                  {13,14,15,16}};
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++){
        if (i == 0){
            for (int j = 0; j < m; j++){
                cout << matrix[i][j] << " ";
            }
            for(int k = 1; k <= n-1; k++){
                cout << matrix[k][m-1] << " ";
            }

            for(int l = n-2; l >=0; l--){
                cout << matrix[n-1][l] << " ";
            }

            for(int o = n-2; o > 0; o--){
                cout << matrix[o][0] << " ";
            }

            for(int p = 1; p < m-1; p++){
                cout << matrix[p][p] << " ";
            }
            

        }
       cout << endl;
    }


    return 0;
}
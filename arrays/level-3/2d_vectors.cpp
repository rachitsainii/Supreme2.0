#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> v; // Declaration
    vector<vector<int>> arr(5, vector<int>(10,0));

    for(int i = 0; i< arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // JAGGED ARRAY
    cout << endl;
    vector<vector<int>> k;
    vector<int> k1(10,0);
    vector<int> k2(5,1);
    vector<int> k3(6,2);
    vector<int> k4(20,3);
    vector<int> k5(7,4);
    k.push_back(k1);
    k.push_back(k2);
    k.push_back(k3);
    k.push_back(k4);
    k.push_back(k5);
    for(int i = 0; i < k.size(); i++){
        for(int j = 0; j < k[i].size(); j++){
            cout << k[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
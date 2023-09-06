#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> DecimalToBinary(int n){
    vector<int> binary;
    while(n > 0){
        int bit = n % 2;
        binary.push_back(bit);
        n = n/2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main(){

    vector<int> function1 = DecimalToBinary(1000);
    for (int i = 0; i < function1.size(); i++){
        cout << function1[i] << " ";
    }
    cout << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++){
        for (int j = rows-i; j > 0; j--){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
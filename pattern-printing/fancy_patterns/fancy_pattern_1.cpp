#include<iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    cout << endl;

    for(int i = 0; i < n; i++){
        for (int j = 1; j <=2*i + 1; j++) {
            if(j%2 == 0){
                cout << "*";
            }else {
                cout << i+1 ;
            }
        }
    cout << endl;    
    }

    return 0;
}
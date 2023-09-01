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

    for(int i = n-1; i > 0; i--){
        for (int j = 1; j <=2*i - 1; j++) {
            if(j%2 == 0){
                cout << "*";
            }else {
                cout << i ;
            }
        }
    cout << endl;    
    }


    return 0;
}
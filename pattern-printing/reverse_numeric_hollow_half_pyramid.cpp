// 1 2 3 4 5
// 2     5
// 3   5
// 4  5
// 5 
#include<iostream>
using namespace std;

int main(){

int n = 0;
cin >> n;
cout << endl;

for (int i = 0; i < n; i++){
    for (int j = 0; j < n-i; j++){
        if ( i == 0 ){
            cout << j+1 << " ";
        } else if (j == n-i-1){
            cout << n;
        }  else if (j == 0){
            cout << i+1 << " ";
        }  else  {
            cout << "  ";
        }
    }
    cout << endl;
}


return 0;

}
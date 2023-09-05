/*
Pattern
1
23
345
4567
*/

#include<iostream>
using namespace std;


int main(){
    int n=0;
    cin >> n;
    int i=1;
    
    while(i<=n){
        int count = i;
        int j = 1;
        while(j <= i){
            cout<< count;
            j = j + 1;
            count = count + 1;
            
        }
        cout<<"\n";
        i = i + 1;
    }
}
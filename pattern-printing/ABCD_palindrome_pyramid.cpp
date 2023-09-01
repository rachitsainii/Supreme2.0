#include<iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++){
        char ch;
        for (int j = 0; j < i+1; j++){
            ch = j + 1 + 'A' -1;
            cout << ch;
        }

    

        // Jab tak a tak nahi pohunchte tab tak print karenge
        for(char alphabet = ch; alphabet > 'A';){
             alphabet=alphabet-1;
            cout << alphabet;
        }

        cout << endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    // Break

    for (int i = 0; i <= 5; i++){
        cout << i << endl;
        break;
    }

    cout << endl;

     for (int i = 0; i <= 5; i++){
        cout << i << endl;
        if (i == 100){
            break;
        }
        
    }

     cout << endl;

     for (int i = 0; i <= 5; i++){
        cout << i << endl;
        if (i == 2){
            break;
        }
        
    }

    cout << endl;
    cout << "Continue " << endl;
    cout << endl;

    // Continue

    for (int i = 0; i <= 5; i++){
        cout << "Hello" << endl;
        continue;
        cout << "How are you?" << endl;
    }

    cout << endl;

     for (int i = 0; i <= 5; i++){
        cout << "Hello" << endl;
        cout << "How are you?" << endl;
          continue;
    }

    return 0;
}
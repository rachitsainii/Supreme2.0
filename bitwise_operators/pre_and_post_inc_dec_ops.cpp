#include<iostream>
using namespace std;

int main(){

    int a = 21;

    cout << ++a << endl;
    // a -> 22;
    cout << a++  << endl;
    // Will print 22 but a value is 23;
    cout << a << endl;
    

    int b = 10;
    cout << (++b)*10 << endl;
    // 110
    cout << (b++)*10 << endl;
    // 110, b = 12

    int c = 10;
    cout << (++c) * (c++) << endl;




    return 0;
}
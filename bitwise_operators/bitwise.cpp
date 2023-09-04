#include<iostream>
using namespace std;

int main(){

    int a = 2;
    int b = 3;


    int c = 5;
    int d = 10;

    cout << (a & b) << endl;
    cout << (c & d) << endl;
    cout << (c | d) << endl;

    int num = 1;
    cout << ~num << endl;
    cout << (~num) << endl;
    cout << ~(num) << endl;

    int x = 5;
    int y = 5;
    cout << (x^y) << endl;

    int k = 5;
    int u = 10;
    cout << (k ^ u) << endl;

    int z = 5;
    int v = -5;
    cout << (z ^ v) << endl;

    int num1 = 7;
    cout << (num1 << 1) << endl;


    int num2 = 5;
    cout << (num2 >> 1) << endl;

    return 0;
}
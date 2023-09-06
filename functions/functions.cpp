#include<iostream>
using namespace std;

void printSum(int a, int b, int c){
    cout << a+b+c << endl;;
}

int returnSum(int a, int b, int c){
    return a+b+c;
}

int maxOf3Numbers(int a, int b, int c){
    if (a > b && a > c){
        return a;
    } else if ( b > a && b > c){
        return b;
    } else {
        return c;
    }
}


void printCounting(int n){
    for (int i = 1; i <=n; i++){
        cout << i << " ";
    }

    cout << endl;
}

void SumofN_natural_nos(int n){
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += i;
    }

    cout << sum << endl;
}

void SumofAllEvenNosTillN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        } else {
            continue;
        }
    }

    cout << sum << endl;
}

void printDigitsOfAnInteger(int n){
    while(n > 0){
        cout << n % 10 << " ";
        n = n / 10;
    }

    cout << endl;
}

double kmToMiles(double km){
    double miles = km * 0.6214;
    return miles;
}

int main(){

    printSum(2,3,4);

    int ans = returnSum(2,3,7);
    cout << ans  << endl;

    int ans_numbers = maxOf3Numbers(3, 5678,321);
    cout << ans_numbers << endl;

    printCounting(10);

    SumofN_natural_nos(5);

    SumofAllEvenNosTillN(5);

    printDigitsOfAnInteger(12345);

    double ans_kmToMiles = kmToMiles(10);
    cout << ans_kmToMiles << endl;

    return 0;
}
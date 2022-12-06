#include<iostream>
using namespace std;

int fib(int n) {
    if(n==0) {
        return 0;
    } else if(n==1) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int a, c;
    cin >> a;
    c = fib(a);
    cout << "n'th fibonacci number : "<< c << endl;
    return 0;
}
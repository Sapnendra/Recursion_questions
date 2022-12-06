#include<iostream>
using namespace std;


/*
intput :- 3 3
output :- 27
*/
int power(int a, int b) {
    if(b == 0) {
        return 1;
    } else {
        return a * power(a, b-1);
    }
}

int main() {
    int a, b, c;
    cin >> a >> b;
    c = power(a, b);
    cout <<"Result : "<< c << endl;
    return 0;
}
#include<iostream>
using namespace std;

/*
intput :- 4 2
output :- 2
*/
int divide(int a, int b) {
    if(a == 0) {
        return 0;
    } else {
        return 1 + divide(a-b, b);
    }
}

int main() {
    int a, b, c;
    cin >> a >> b;
    c = divide(a, b);
    cout <<"Result : "<< c << endl;
    return 0;
}
#include<iostream>
using namespace std;

void character(char* c) {
    if(*c != NULL ){

        character(c+1);
        character(c+2);
        cout << *c <<" ";

    }
}

int main() {

    character("abc");
    return 0;
}
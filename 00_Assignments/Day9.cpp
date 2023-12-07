#include<iostream>
using namespace std;

int main() {
    // First Pattern: 
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5 
    // 1 2 3 4 5 6 
    // 1 2 3 4 5 6

    for(int i=1; i<=7; i++) {
        for(int j=0; j<i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    // Second Pattern:
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E

    char ch;

    for(int i=0; i<5; i++) {
        for(int j=0; j<i; j++) {
            ch = 'A'+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
    // Third Pattern:
    // 10
    // 10 11
    // 10 11 12
    // 10 11 12 13
    // 10 11 12 13 14
    // 10 11 12 13 14 15

    for(int i=0; i<6; i++) {
        for(int j=10; j<=10+i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // Fourth Pattern:
    // A B C D
    // A B C
    // A B
    // A
    char elem;
    for(int i=4; i>=1; i--) {
        for(int j=0; j<i; j++) {
            elem = 'A'+j;
            cout<<elem<<" ";
        }
        cout<<endl;
    }
}
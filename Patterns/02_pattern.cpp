// Make the following patterns-

#include<iostream>
using namespace std;

int main() {
        
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    for(int i=1;i<6;i++) {
        for(int j=0; j<i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // for(int i=1; i<6; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    // for(int i=1; i<=5; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1

    
    // for(int i=1; i<6; i++) {
    //     for(int j=i; j>=1; j--) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // a
    // b b
    // c c c
    // d d d d
    // e e e e e

    // for(int i=0; i<5; i++) {
    //     for(int j=0; j<=i; j++) {
    //         char ch = 'a';
    //         ch += i;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    // * * * * *
    // * * * *
    // * * * 
    // * *
    // * 

    // for(int i=5; i>=1; i--) {
    //     for(int j=0; j<i; j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // for(int i=5;i>=1;i--) {
    //     for(int j=1; j<=i; j++) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

    // for(int i=0;i<5; i++) {
    //     for(int j=5; j>=5-i; j--) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }



}

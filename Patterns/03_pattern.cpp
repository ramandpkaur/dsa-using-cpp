// Print the below patterns-

#include<iostream>
using namespace std;

int main() {
    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *
    //  __________________
    // | ROW | SPACE | * |
    // |_____|_______|___|
    // |  1  |   4   | 1 |
    // |  2  |   3   | 3 |
    // |  3  |   2   | 5 |
    // |  4  |   1   | 7 |
    // |  5  |   0   | 9 |
    // |_____|_______|___|

    
    // for(int i=1; i<=5; i++) {
    //     // print the whitespaces
    //     for(int j=5; j>=i; j--) {
    //         cout<<"  ";
    //     }

    //     // print the stars
    //     for(int k=1; k<=2*i-1; k++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }


    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1

    // for(int i=1; i<=5; i++) {
    //     // print the whitespaces
    //     for(int j=5; j>=i; j--) {
    //         cout<<"  ";
    //     }

    //     // print the numbers in incresing order
    //     for(int k=1; k<=i; k++) {
    //         cout<<k<<" ";
    //     }

    //     // print the numbers in decreasing order
    //     for(int l=i-1; l>=1; l--) {
    //         cout<<l<<" ";
    //     }
    //     cout<<endl;   
    // }

    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *
    
    // for(int i=5; i>=1; i--) {
    //     // print the whitespaces
    //     for(int j=5; j>i; j--) {
    //         cout<<"  ";
    //     }

    //     // print the stars
    //     for(int k=2*i-1; k>=1; k--) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;    
    // }

    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *

    // for(int i=4; i>=1; i--) {
    //     for(int j=i; j>=1; j--) {
    //         cout<<"*  ";
    //     }
    //     for(int k=8-2*i; k>0; k--) {
    //         cout<<"   ";
    //     }
    //     for(int j=i; j>=1; j--) {
    //         cout<<"*  ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1; i<=4; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout<<"*  ";
    //     }
    //     for(int k=8-2*i; k>0; k--) {
    //         cout<<"   ";
    //     }
    //     for(int j=1; j<=i; j++) {
    //         cout<<"*  ";
    //     }
    //     cout<<endl;
    // }
    
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *


    // for(int i=1; i<=3; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout<<"* ";
    //     }
    //     for(int k=8-2*i; k>0; k--) {
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=i; j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=4; i>=1; i--) {
    //     for(int j=i; j>=1; j--) {
    //         cout<<"* ";
    //     }
    //     for(int k=8-2*i; k>0; k--) {
    //         cout<<"  ";
    //     }
    //     for(int j=i; j>=1; j--) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //    *  
    //   * *
    //  * * *
    // * * * *
    // * * * *
    //  * * *
    //   * *
    //    *  
    
    //  __________________
    // | ROW | SPACE | * |
    // |_____|_______|___|
    // |  1  |   3   | 1 |
    // |  2  |   2   | 2 |
    // |  3  |   1   | 3 |
    // |  4  |   0   | 4 |
    // |_____|_______|___|

    // for(int i=1; i<=4; i++) {
    //     for(int j=3; j>=i; j--) {
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=i; k++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1; i<=3; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout<<" ";
    //     }
    //     for(int k=3; k>=i; k--) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }




}
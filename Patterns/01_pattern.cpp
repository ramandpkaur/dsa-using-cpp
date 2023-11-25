// Make the following patterns:

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;

// int main() {
//     for(int i=1; i<=5; i++) {
//         for(int j=1; j<=5; j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4 
// 5 5 5 5 5

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1; i<=5; i++) {
//         for(int j=1; j<=5; j++) {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }


// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1; i<=5; i++) {
//         for(int j=1; j<=5; j++) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1; i<=5; i++) {
//         for(int j=5; j>=1; j--) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1; i<=5; i++) {
//         for(int j=1; j<=5; j++) {
//             cout<<j*j<<" ";
//         }
//         cout<<endl;
//     }
// }

// 1 8 37 64 125
// 1 8 37 64 125
// 1 8 37 64 125
// 1 8 37 64 125
// 1 8 37 64 125

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1; i<=5; i++) {
//         for(int j=1; j<=5; j++) {
//             cout<<j*j*j<<" ";
//         }
//         cout<<endl;
//     }
// }

// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=0; i<5; i++) {
//         for(int j=0;j<5; j++) {
//             char ch='a';
//             ch += i;
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e

// #include<iostream>
// using namespace std;

// int main() {    
//     for(int i=0; i<5; i++) {
//         for(int j=0;j<5; j++) {
//             char ch='a';
//             ch += j;
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// #include<iostream>
// using namespace std;

// int main() {
//     int count = 1;
//     for(int i=0; i<5; i++) {
//         for(int j=0;j<5; j++) {
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     // Another way
    
//     for(int i=0; i<5; i++) {
//         for(int j=10;j<=5; j++) {
//             cout<<5*i + j<<" ";
//         }
//         cout<<endl;
//     }
// }
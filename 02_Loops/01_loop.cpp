// Print numbers from 101 to 200

// #include<iostream>
// using namespace std;

// int main() {
//     int i;
//     for(i=100; i<=200;i++) {
//         cout<<i<<endl;
//     }
// }

// Print all alphabets from a to z

// #include<iostream>
// using namespace std;

// int main() {
//     char ch;
//     for(ch='a'; ch<='z'; ch++) {
//         cout<<ch<<endl;
//     }
// }

// Print numbers in reverse from 20 to 1

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=20; i>0; i--) {
//         cout<<i<<endl;
//     }
// }

// Print an AP upto 100, with first number 1 and difference 3

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i=1; i<=100; i+=3) {
//         cout<<i<<" ";
//     }
// }

// Print the table of number n

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a number to generate the table: ";
//     cin>>n;
//     for(int i=1; i<=20; i++) {
//         cout<<n*i<<" ";
//     }
// }

// Calculate power of a given number

// #include<iostream>
// using namespace std;

// int main() {
//     int n, pow, num;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<"Enter the power: ";
//     cin>>pow;
//     num = n;
//     for(int i=1; i<pow; i++) {
//         num *= n;
//     }

//     cout<<n<<" power "<<pow<<" equals "<<num<<endl;
// }

// Find sum of n natural numbers

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum;
//     cout<<"Enter a number: ";
//     cin>>n;

    
//     // Using loop
//     // sum = 0;
//     // for(int i=1; i<=n; i++) {
//     //     sum+=i;
//     // }

//     // Without using loop
//     sum = n * (n+1) / 2;

//     cout<<"Sum of "<<n<<" Natural Numbers is "<<sum<<endl;
// }


// *******************************************************************************
// Formula for Sum of squares of n natural numbers: [n(n+1)(2n+1)] / 6. 
// Formula for Sum of squares of first n even numbers: [2n(n + 1)(2n + 1)] / 3. 
// Formula for Sum of squares of first n odd numbers: [n(2n+1)(2n-1)] / 3.
// *******************************************************************************


// Calculate sum of squares of n natural numbers

// #include<iostream>
// using namespace std;

// int main() {
//     int n, result;

//     cout<<"Enter a number: ";
//     cin>>n;

//     result = n*(n+1)*(2*n + 1) / 6;

//     cout<<"Sum of square of first "<<n<<" Natural numbers is "<<result<<endl;
// }

// Calculate Factorial of a number

// #include<iostream>
// using namespace std;

// int main() {
//     int n, factorial;
//     cout<<"Enter a number: ";
//     cin>>n;
//     factorial=1;
//     for(int i=n; i>1; i--) {
//         factorial *= i;
//     }

//     cout<<"Factorial is "<<factorial<<endl;
// }

// Check if given number is prime or not

// #include<iostream>
// using namespace std;

// int main() {
//     int n;

//     cout<<"Enter a number: ";
//     cin>>n;

//     if(n<2) {
//         cout<<"Not Prime";
//         return 0;
//     }
//     else {
//         for(int i=2; i<n; i++) {
//             if(n%i == 0) {
//                 cout<<"Not Prime";
//                 return 0;
//             }
//         }
//         cout<<"Prime";
//     }
// }

// Find the n numbers of a Fibonacci series.

#include<iostream>
using namespace std;

int main() {
    int n, prev, curr, fib;
    cout<<"Enter a number: ";
    cin>>n;

    prev = 0;
    curr = 1;

    for(int i=1; i<=n; i++) {
        fib = prev+curr;
        cout<<fib<<" ";
        prev = curr;
        curr = fib;
    }
    cout<<endl;
}
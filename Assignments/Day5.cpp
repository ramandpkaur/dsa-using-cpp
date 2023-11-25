#include<iostream>
using namespace std;

int main() {
    // Print number from 280 to 250 with the help of for loop.
    for(int i=280; i>=250; i--) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    // Print char from ‘A’ to ‘Z’ with the help of a for loop.
    char letter = 'A';
    for(int i=0; i<26; i++) {
        cout<<letter<<" ";
        letter += 1;
    }
    cout<<endl;
    cout<<endl;

    // Print char from ‘Z’ to ‘A’ with the help of a for loop.
    char lastLetter = 'Z';
    for(int i=0; i<26; i++) {
        letter -= 1;
        cout<<letter<<" ";
    }
    cout<<endl;
    cout<<endl;
    // There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
    for(int i=220; i<=730; i+=7) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;
    // Print Sum of square of first n natural number.
    int num, sum;
    cout<<"Enter a number: ";
    cin>>num;
    sum=0;
    for(int i=1;i<=num; i++) {
        sum += i*i;
    }
    cout<<"Sum of squares of first "<<num<<" Natural numbers: "<<sum<<endl;
    cout<<endl;
    // Print Sum of cube of first n natural number
    int num1, sum1;
    cout<<"Enter a number: ";
    cin>>num1;
    sum1=0;
    for(int i=1;i<=num1; i++) {
        sum1 += i*i*i;
    }
    cout<<"Sum of cubes of first "<<num1<<" Natural numbers: "<<sum1<<endl;
    cout<<endl;

    // Print n’th Fibonacci number.
    int num2, prev, curr, next;
    cout<<"Enter a number: ";
    cin>>num2;

    prev=0;
    curr=1;

    for(int i=1; i<=num2; i++) {
        next = curr + prev;
        curr = next;
        prev = curr;
    }
    cout<<num2<<"th Fibonacci number: "<<next<<endl;
    cout<<endl;

}
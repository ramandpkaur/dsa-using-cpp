#include<iostream>
using namespace std;

int main() {
    // Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1;
    cin>>num2;

    if(num1>num2) {
        cout<<num1<<" is greater.";
    }
    else {
        cout<<num2<<" is greater.";
    }

    cout<<endl;
    cout<<endl;
    // Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

    int age;
    cout<<"Enter the age of the person: ";
    cin>>age;
    if(age>18) {
        cout<<"Adult";
    }
    else {
        cout<<"Teenager";
    }

    cout<<endl;
    cout<<endl;
    // Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
    
    int num;
    cout<<"Enter a number between 1 and 12: ";
    cin>>num;

    switch(num) {
        case 1:
            cout<<"January";
            break;
        case 2:
            cout<<"February";
            break;
        case 3:
            cout<<"March";
            break;
        case 4:
            cout<<"April";
            break;
        case 5:
            cout<<"May";
            break;
        case 6:
            cout<<"June";
            break;
        case 7:
            cout<<"July";
            break;
        case 8:
            cout<<"August";
            break;
        case 9:
            cout<<"September";
            break;
        case 10:
            cout<<"October";
            break;
        case 11:
            cout<<"November";
            break;
        case 12:
            cout<<"December";
            break;
    }

    cout<<endl;
    cout<<endl;
    // Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

    int n;

    cout<<"Enter your age to check if you are eligible for discounts: ";
    cin>>n;

    if(n<12 || n>65 ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    
    cout<<endl;
    cout<<endl;
}



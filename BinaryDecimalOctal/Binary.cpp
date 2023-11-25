#include<iostream>
using namespace std;

int main() {
    // Decimal to Binary Conversion
    // int num, rem, ans, mul;
    // cout<<"Enter the number: ";
    // cin>>num;
    // ans = 0;
    // mul = 1;

    // while(num>0) {
    //     rem = num%2; //2 for Binary conversion
    //     ans += rem*mul;
    //     num /= 2; //2 for Binary conversion
    //     mul *= 10;
    // }
    // cout<<"Number in Binary is: "<<ans<<endl;

    cout<<endl;
    // Binary to Decimal Conversion

    // int number, answer, remainder, multiplier;
    // cout<<"Enter the Binary number: ";
    // cin>>number;
    // answer = 0;
    // multiplier = 1;
    // while(number > 0) {
    //     remainder = number % 10;
    //     answer += remainder * multiplier;
    //     multiplier *= 2; // can also use Left Shift << bitwise operator here
    //     number /= 10;
    // }
    // cout<<"Decimal conversion is: "<<answer<<endl;

    cout<<endl;
    
    // Decimal to Octal Conversion

    int num, rem, ans, mul;
    cout<<"Enter the number: ";
    cin>>num;
    ans = 0;
    mul = 1;

    while(num>0) {
        rem = num%8; //8 for Octal conversion
        ans += rem*mul;
        num /= 8; //8 for Octal conversion
        mul *= 10;
    }
    cout<<"Number in Octal is: "<<ans<<endl;
    cout<<endl;

    // Octal to Decimal Conversion

    int number, answer, remainder, multiplier;
    cout<<"Enter the Octal number: ";
    cin>>number;
    answer = 0;
    multiplier = 1;
    while(number > 0) {
        remainder = number % 10;
        answer += remainder * multiplier;
        multiplier *= 8; // can also use Left Shift << bitwise operator here
        number /= 10;
    }
    cout<<"Decimal conversion is: "<<answer<<endl;

    cout<<endl;



}
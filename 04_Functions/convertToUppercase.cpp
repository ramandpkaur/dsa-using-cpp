#include<iostream>
using namespace std;

char convertToUppercase(char x) {
    // x -= 32; //Difference between 65(A) and 97(a) is 32.
    x = x - 'a' + 'A';
    return x;
}
int main() {
    char ch;
    cin>>ch;

    cout<<convertToUppercase(ch)<<endl;

    // The main function also returns int but we have been skipping writing the return statement in our main funtion.
    // This is an added feature of the modern web browsers that prevents any error dialogues when return statement is skipped in the main function.
    // For other functions, this will throw an error
}
#include<iostream>
using namespace std;

int main() {
    char arr[] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};
    for(int i=0; i<12; i++) 
        cout<<arr[i]<<" ";
    cout<<endl;
    /*
    In case of char arrays, the last element of the array is always null, which is denoted by \0 and indicates the 
    end of the array.
    Also, since we can avoid dynamic memory allocation in arrays, we need to initialize the character array with some 
    size.
    Here, we need to keep in mind that if there is no space for the null character in the array, there will be runtime 
    error and the compilation shall be aborted.

    We can use strings instead of char arrays to simplify dynamic memory allocation issues.
    */

    string s="Ramandeep Kaur";
    string str;
    /*
    We cannot take any sentence like string as an input from the user using cin>>s; 
    This is because the functionality of cin uses spaces, tabs and enter key as an indication of the end of he input.
    Hence, as soon as we click space or tab, the function cin will not wait for any further input from the users.

    This issue can be resolved by using the getline() function. This function terminates the user input only when the 
    enter button is hit.*/

    getline(cin, str);

    // Size of string
    cout<<"Size of string: "<<s.size()<<endl;

    // Concatenate two strings
    string s1="Rohit ", s2="Mohit ";
    string s3 = s1+s2;
    cout<<"Concatenated Strings: "<<s3<<endl;

    s3.append(s1);
    cout<<"Appended Strings: "<<s3<<endl;
    
    // Add a character
    s.push_back('p');
    cout<<s<<endl;
    
    // Remove a character
    s.pop_back();
    cout<<s<<endl;
    
    // Escape Character
    s = "Raman is a \"great\" Programmer.";
    cout<<s<<endl;

    // Reverse the string
    int start=0, end=s.size()-1;
    while(start<=end) {
        swap(s[start], s[end]);
        start++, end--;
    }
    cout<<"Reversed string: "<<s<<endl;

    // Print size of string without using size() function
    int i=0;
    while(s[i] != '\0') {
        i++;
    }
    cout<<"Size of string: "<<i<<endl;

    // Check Palindrome string
    start=0, end=str.size()-1;

    while(start<=end) {
        if(str[start] != str[end]) {
            cout<<"Not a Palindrome"<<endl;
            break;
        }
        start++, end--;
    }
    cout<<"Is a Palindrome"<<endl;
}
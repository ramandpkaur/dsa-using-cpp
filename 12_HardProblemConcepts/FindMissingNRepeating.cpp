// Find missing and repeating in Array

/*
Here an array contains numbers from 1 to n where, one number is missing and one is repeating.
We need to find the missing and repeating number.

Brute Force Approach:
To start from 1, find it and also count if its coourence is more than once.
Complexity will be O(n^2)

Another Approach:
To sort the data and then find the same.
Complexity: O(n.logn)

3rd Approach:
We can create a separate array to store the count of each element and then traverse it to find both values.

Optimum Approach:
Reduce the value of each element by 1, so that the elements and index values can be mapped.

*/

#include<iostream>
using namespace std;

int main() {
    int arr[] = {4,3,2,1,2,7,6};
    int n=7;
    int missing, repeating;

    // Reduce each array element by 1 so that the range changes from 1 to n to 0 to n-1, and matches the index values.
    for(int i=0; i<n; i++) {
        arr[i]--;
    }

    for(int i=0; i<n; i++) {
        arr[arr[i]%n] += n;
    }

    for(int i=0; i<n; i++) {
        if(arr[i]/n == 0) 
            missing = i+1;
        
        if(arr[i]/n==2) 
            repeating = i+1;
    }
    cout<<"Missing: "<<missing<<endl;
    cout<<"Repeating: "<<repeating<<endl;
    
    cout<<endl;
    
}
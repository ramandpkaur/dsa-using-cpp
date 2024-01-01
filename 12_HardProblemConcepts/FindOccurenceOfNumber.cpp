#include<iostream>
using namespace std; 

int main() {
    int arr[] = {3,2,5,3,1,2,3,7};
    int n = 8;

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n; i++) {
        arr[arr[i]%n - 1] += n;
    }

    for(int i=0; i<n; i++) {
        arr[i] /= n;
    }
    
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
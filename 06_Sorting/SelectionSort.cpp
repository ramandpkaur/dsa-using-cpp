#include<iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[] = {3, 7, 65, 46, 31, 1, 12};
    int index;

    // Selection Sort by finding the min element
    // for(int i=0; i<n-1; i++) {
    //     index = i;
    //     for(int j=i+1; j<n; j++) {
    //         if(arr[j]<arr[index])
    //             index = j;
    //     }
    //     swap(arr[index], arr[i]);
    // }

    // Selection Sort by finding the max element
    for(int i=n-1; i>0; i--) {
        index= i;
        for(int j=0; j<=i; j++) {
            if(arr[j]>arr[index]) 
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Time Complexity = O(n*n)
    // Space Complexity = O(1) {i, j, index}
}
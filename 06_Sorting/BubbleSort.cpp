#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {4,1,3,9,7};

    // Bubble Sort Algorithm
    for(int i=n-2; i>=0; i--) {
        bool swapped = 0;
        for(int j=0; j<=i; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = 1;
            }
        }
        if(!swapped) {
            break;
        }
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Time Complexity = O()
    // Space Complexity = O(1) {i, j}
}
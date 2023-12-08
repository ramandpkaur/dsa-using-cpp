#include<iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[] = {3, 7, 65, 46, 31, 1, 12};

    // Insertion Sort Algorithm
    for(int i=1; i<n; i++) {
        for(int j=i; j>0; j--) {
            if(arr[j]<arr[j-1]) {
                swap(arr[j], arr[j-1]);
            }
            else {
                break;
            }
        }
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Time Complexity: O(n*n)
    // Space Complexity: O()
}
#include<iostream>
using namespace std;

int main() {
    // Input an array
    int arr[50];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    // Reverse the Array
    int i=0, j=n-1;
    while(i<j) {
        // swapping the elements
        arr[i] = arr[i]+arr[j];
        arr[j] = arr[i]-arr[j];
        arr[i] = arr[i]-arr[j];

        // Updating counter i and j
        i++;
        j--;
    }

    // Print reversed array
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
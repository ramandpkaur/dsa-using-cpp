#include<iostream>
using namespace std;

int main() {
    int arr[50];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    // Find minimum in the array
    int min = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
    }

    cout<<"Min: "<<min<<endl;
}
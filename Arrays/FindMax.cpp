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

    // Find maximum in the array
    int max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }

    cout<<"Max: "<<max<<endl;
}
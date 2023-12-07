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

    // Find given element
    int num;
    cout<<"Enter element to be searched: ";
    cin>>num;

    for(int i=0; i<n; i++) {
        if(arr[i]==num) {
            cout<<i<<endl;
            break;
        }
    }

    cout<<"-1"<<endl;

}
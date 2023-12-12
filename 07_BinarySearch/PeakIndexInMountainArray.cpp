#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,6,5,3,1};
    int n=5;
    int start=0, end=n-1, mid;

    while(start<=end) {
        mid = start + (end-start)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) {
            cout<<mid;
            return 0;
        } 
        else if(arr[mid-1]<arr[mid]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
}
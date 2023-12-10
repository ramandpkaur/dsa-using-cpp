#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,3,5,6,8,9,6,5,3,1};
    int n=10;
    int start=0, end=n-1, mid;

    while(start<=end) {
        mid = start + (end-start)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]) {
            start = mid+1;
        }
        else if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) {
            return mid;
        } 
        else {
            end = mid-1;
        }
    }
}
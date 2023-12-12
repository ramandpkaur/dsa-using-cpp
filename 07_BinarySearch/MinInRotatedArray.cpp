#include<iostream>
using namespace std;

int main() {
    int arr[] = {4,6,8,10,12,1,2};
    int n=7, start=0, end=n-1, mid;
    int min = 0;

    while(start<=end) {
        mid = start + (end-start)/2;

        if(arr[min]<arr[mid]) {
            start = mid+1;
        }
        else {
            min = mid;
            end = mid-1;
        }
    }
    cout<<mid<<endl;
}
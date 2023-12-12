#include<iostream>
using namespace std;

int main() {
    int arr[] = {4,6,8,10,12,1,2};
    int n=7, start=0, end=n-1, mid;
    int target = 12;

    while(start<=end) {
        mid = start + (end-start)/2;

        if(arr[mid]==target) { //target is bigger or smaller than mid
            cout<<mid<<endl;
            break;
        }
        else if(target<arr[mid] && arr[start]<target) {
            end=mid-1;
        }
        else {
            start=mid+1;
        }
            
    }
}
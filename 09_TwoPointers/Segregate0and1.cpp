#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>arr={1,0,0,0,1,0,1,0,1};
    int n = arr.size();
    int start=0, end=n-1;

    while(start<=end) {
        if(arr[start]==1 && arr[end]==0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if(arr[start]==0) {
            start++;
        }
        else {
            end--;
        }
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

}
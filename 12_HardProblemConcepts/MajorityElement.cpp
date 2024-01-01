// Majority Element Problem

#include<iostream>
using namespace std;

int main() {
    int arr[] = {3,3,2,3,1,3,2,1,2,3,3,2,3};
    int n=3;

    int candidate, count=0;

    // To find majority element
    for(int i=0; i<n; i++) {
        if(count == 0) {
            candidate = arr[i];
            count++;
        }
        else {
            if(candidate == arr[i])
                count++;
            else 
                count--;
        }
    }
    cout<<"Majority Element is: "<<candidate<<endl;

    // To verify the majority element (only needed where array may not have any majority element)
    count = 0;
    for(int i=0; i<n; i++)
        if(arr[i] == candidate)
            count++;
    if(count > n/2)
        cout<<"Majority Element is: "<<candidate<<endl; 
    else 
        cout<<"No Majority Element exists"<<endl;
}
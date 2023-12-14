#include<iostream>
using namespace std;

int main() {
    int piles[]={30,11,23,4,20}; //Banana pile sizes
    int h=6; // Number of hours
    int n=5; //Size of pile array

    int start=0, end=0, mid, ans;
    long long sum=0;
    for(int i=0; i<n; i++) {
        sum += piles[i];
        if(end<piles[i]) 
            end=piles[i];
    }
    start = sum/h;
    if(!start) 
        start=1;

    while(start<=end) {
        mid = end + (start-end)/2;
        //mid = Amount of bananas to be eaten in 1 hour

        int total_time = 0;

        for(int i=0; i<n; i++) {
            total_time += piles[i]/mid;
            if(piles[i]%mid) 
                total_time++;
        }

        if(total_time <= h) {
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }

    }

    cout<<ans<<endl;
}
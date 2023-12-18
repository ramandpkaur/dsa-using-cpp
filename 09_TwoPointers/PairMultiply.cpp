#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>A = {5,10,3,2,50,80};
    int product = 150;
    int start=0, end=1, n=A.size()-1;
    vector<int>ans;

    sort(A.begin(), A.end());

    while(end<n) {
        if(A[end]*A[start] == product) {
            // ans[0]=start;
            // ans[1]=end;
            return 1;
        }
        else if(A[end]*A[start] > product)
            end--;
        else
            start++;
        
        if(start==end)
            end++;
    }
    return 0;
    // for(auto i:ans)
    //     cout<<ans[i]<<" ";
    // cout<<endl;
}
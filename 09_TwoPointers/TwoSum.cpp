#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums={2,7,11,15};
    int target = 9;
    int sum, start=0, end=nums.size()-1;
    vector<int>ans;

    while(start<=end) {
        sum = nums[start]+nums[end];
        if(sum==target) {
            ans.push_back(start);
            ans.push_back(end);
            break;
        }
        else if(sum>target)
            end--;
        else
            start++;
    }

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" "<<endl;
    }

}
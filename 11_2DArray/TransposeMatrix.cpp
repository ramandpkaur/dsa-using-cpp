#include<iostream>
using namespace std;

int main() {
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    /* Approach: 1
    Time Complexitty: O(n.n)
    Space Complexity: O(n)
    */
    // int ans[4][4];

    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<4; j++) {
    //         arr[i][j] = ans[j][i];
    //     }
    // }
    
    /* Approach: 1
    Time Complexitty: O(n)
    Space Complexity: O(1)
    */
    for(int i=0; i<4; i++)
        for(int j=i+1; j<4; j++)
            swap(arr[i][j], arr[j][i]);
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
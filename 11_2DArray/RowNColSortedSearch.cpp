// In this type of matrix, elements are sorted row wise as well as column wise. But the overall matrix is NOT sorted.
/* For example:
 4   8  15  25  60
18  22  26  42  80
36  40  45  68 104
48  50  72  83 130
70  99 114 128 170

Here the approach will be to start the search from right top corner of the matrix.
This is because for Binary search, we need to make if else condition such that the values at one end decrease and the 
other end increase.
If we see matrix[0][0], the elements will increase horizontally as well as vertically.
We can start from matrix[0][4] so that we can move downwards to increase the value of elements and towards left to 
decrease the value of element.

We can also start from element matrix[4][0] in a similar way.
*/

// Time Complexity: O(N+M)
// Space Complexity: O(1)

#include<iostream>
using namespace std;
int main() {
    int matrix[5][5] = {4,8,15,25,60,18,22,26,42,80,36,40,45,68,104,48,50,72,83,130,70,99,114,128,170};
    int target = 50;
    int row = 4, col = 4;
    int i=0, j=col-1;

    while(i<row && j>=0) {
        if(matrix[i][j] == target) {
            cout<<"Target was found!"<<endl;
            break;
        }
        else if(matrix[i][j] > target)
            j--;
        else    
            i++;
    }
}
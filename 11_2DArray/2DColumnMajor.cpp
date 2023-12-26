#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    // Declaring and initializing 2D Vectors
    vector<vector<int>>someMatrix;

    vector<vector<int> >matrix(3, vector<int>(4, 9));
    /*
    Creates a 2D vector as follows:
    9 9 9 9
    9 9 9 9
    9 9 9 9
    */

    // In case of a 2D vector, we need not be given the total rows and column size. We can find them as shown:
    int row = matrix.size();
    int column = matrix[0].size();

    for(int i=0; i<row; i++) {
        for(int j=o; j<column; j++) {
            cout<<matrix[i][j]<<" ";
        }
    }



}
#include<iostream>
using namespace std;

bool isARect(int a, int b, int c, int d) {
    if(( a==b && c==d ) || ( a==c && b==d ) || ( a==d && b==c )) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int s1, s2, s3, s4;
    cout<<"Enter four numbers: "<<endl;
    cin>>s1>>s2>>s3>>s4;

    cout<<isARect(s1, s2, s3, s4);

}
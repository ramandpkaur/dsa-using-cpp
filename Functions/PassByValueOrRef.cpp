#include<iostream>
using namespace std;

void swapPassByValue(int x, int y) { 
    int c = x;
    x = y;
    y = c;
}
void swap(int &x, int &y) { //Pass be reference
    int c = x;
    x = y;
    y = c;
}

// Function Overloading - When function with same name and different parameters are created.

void swap(float &x, float &y) { //Pass be reference
    float c = x;
    x = y;
    y = c;
}

int main() {
    int a, b;
    cin>>a;
    cin>>b;

    swapPassByValue(a,b);
    cout<<a<<" "<<b<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1=3.6, f2=4.8;

    swap(f1, f2);
    cout<<f1<<" "<<f2<<endl;
    cout<<endl;

}
// Check if the given string is rotated by 2 places in any direction

/*
For example: 
Input String: Ramandeep
Clockwise Rotation: pRamandee
Anti=Clockwise Rotation: amandeepR

*/
#include<iostream>
using namespace std;

void rotateClockwise(string &clockwise) {
    char temp = clockwise[clockwise.size()-1];
    
    for(int i=clockwise.size()-1; i>0; i--) {
        clockwise[i] = clockwise[i-1];
    }
    clockwise[0] = temp;
}

void rotateAnticlockwise(string &anticlockwise) {
    char temp = anticlockwise[0];
    
    for(int i=0; i<anticlockwise.size()-1; i++) {
        anticlockwise[i] = anticlockwise[i+1];
    }
    anticlockwise[anticlockwise.size()-1] = temp;
}

int main() {
    string str = "Ramandeep";
    rotateClockwise(str);
    cout<<str<<endl;
    rotateAnticlockwise(str);
    cout<<str<<endl;
    rotateAnticlockwise(str);
    cout<<str<<endl;
}
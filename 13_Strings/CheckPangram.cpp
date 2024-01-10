// Check if the given string is a Pangram, i.e. contains all the english alphabets.
#include<iostream>
using namespace std;

int main() {
    string sentence = "the quick fox jumps over the lazy dog.";
    int letters[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int index=0;

    while(index < sentence.size()) {
        if(sentence[index] >= 'a' && sentence[index] <= 'z') {
            letters[sentence[index]-'a'] = 1;
        }
        index++;
    }
    cout<<"Sentence is ";
    for(int i=0; i<26; i++) {
        if(letters[i] == 0) {
            cout<<"not ";
            break;
        }
    }
    cout<<"a Pangram."<<endl;
}
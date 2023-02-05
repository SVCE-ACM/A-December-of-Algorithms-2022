#include <climits>
#include <iostream>

using namespace std;

int main() {
    int n, myChoiceLength = -1;
    int length;
    
    string myChoice = "Better Luck Next Time";
    cin>>n;

    string word;
    
    for(int i=0; i<n; i++){
        cin>>word;
        length = word.length();
        if(word.length()%2!=0 && length > myChoiceLength) {
            myChoiceLength = word.length();
            myChoice = word;
        }
    }
    cout<<myChoice;
}

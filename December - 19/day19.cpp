#include<bits/stdc++.h>

using namespace std;

int isAnagramPossible(string& text, string& anagram); 
void printFoundMatch(string& text, string& anagram, int endPos);      

int main (int argc, char *argv[])
{
    string text, anagram;
    
    getline(cin>>ws, text); 
    getline(cin>>ws, anagram);
    printFoundMatch(text, anagram, isAnagramPossible(text, anagram));
    return 0;
}

int isAnagramPossible(string& text, string& anagram){
    map<char, int> myChartedAccountantGirl;
    int concecutiveCounter = 0, restorePointer = 0;
    char c;

    for(int i=0; i<anagram.size(); i++){
        c = tolower(anagram[i]);
        myChartedAccountantGirl[c] += 1;
    }
    
    for(int traveller = 0; traveller < text.size(); traveller++){
        c = tolower(text[traveller]);

        if((myChartedAccountantGirl[c] -= 1) < 0){
            concecutiveCounter++;

            while(restorePointer <= traveller){
                c = tolower(text[restorePointer++]);
                myChartedAccountantGirl[c] += 1;
            }
            traveller -= (concecutiveCounter - 1);
            restorePointer = traveller;
            concecutiveCounter = 0;

        } else if(++concecutiveCounter == anagram.size()) return traveller;
    }
    return -1;
}
void printFoundMatch(string& text, string& anagram, int endPos){
    if(endPos != -1){
        int start = endPos - anagram.size() + 1;
        for( ; start <= endPos; start++){
            cout<<text[start];
        }
    }
}

    //string string1 = "My world evolves in a beautiful space called Tesh.";
    //string string2 = "sworn love lived";

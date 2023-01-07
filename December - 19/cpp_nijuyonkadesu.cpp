#include<iostream>
#include<map>

using namespace std;

int isAnagramPossible(string& text, string& anagram); // if -1 not found
void printFoundMatch(string& text, string& anagram, int endPos);       // prints the matched substring from the text

int main (int argc, char *argv[])
{
    string text, anagram;
    
    getline(cin>>ws, text); // consumes white space as well
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

            // cout<<"before: "<<restorePointer<<endl;
            while(restorePointer <= traveller){
                c = tolower(text[restorePointer++]);
                myChartedAccountantGirl[c] += 1;
            }
            traveller -= (concecutiveCounter - 1);
            restorePointer = traveller;
            concecutiveCounter = 0;
            // cout<<"after: "<<restorePointer<<endl;

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


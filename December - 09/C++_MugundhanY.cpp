//Question 9:
#include <bits/stdc++.h>
using namespace std;
 
void randomword(string word[], int n){
    string temp; 
    for(size_t i = 0; i < n; i++){
        if(word[i].size()%2 != 0){
            if(temp.size() < word[i].size()){
                temp = word[i];
            }
        } 
    }
    if(temp.empty()) cout << "Better luck next time";
    else cout << temp;
}
 
int main(){
    int n;
    cin >> n;
    
    string word[n];
    for(int i=0; i<n; i++){
        cin >> word[i];
    }
    randomword(word, n);
  return 0;
}

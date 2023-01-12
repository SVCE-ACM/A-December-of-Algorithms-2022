//Question 8:
#include <bits/stdc++.h>
using namespace std;
 
void reverseword(string word){

    for (size_t i = 0; i < word.length(); i += 2){
        string part = word.substr(i, 2);
        reverse(part.begin(), part.end());
        cout << part;
    }
}
 
int main(){
    string a;
    cin >> a; 
    reverseword(a);
  return 0;
}

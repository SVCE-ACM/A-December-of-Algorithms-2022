//Question 17:
#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows){
    int n = numRows;
    string str;
    if(n == 0 || n == 1) return s;
            
    for(int i = 0; i < s.length(); i += (n-1)*2){
        str += s[i];
    }
        
    for(int j = 1; j < n-1; j++){
        bool goDown = true;
        for(int i = j; i < s.length();){
            str += s[i];
            if(goDown){
                i+=(n-j-1)*2;
            }else{
                i+=(n-1)*2-(n-j-1)*2;
            }
            goDown = !goDown;
        }
            
    }
        
    for(int i = n-1; i < s.length(); i += (n-1)*2){
        str += s[i];
    }
    return str;
}

int main(){
    string s;
    cin >> s;
    int numRows;
    cin >> numRows;
    cout << convert(s, numRows);
    return 0;
}

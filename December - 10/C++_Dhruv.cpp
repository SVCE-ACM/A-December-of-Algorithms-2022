#include <bits/stdc++.h>
using namespace std;
bool check_vowel(char ch)
{
    if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u')
    return true;
    else
    return false;
}
int main() {
    
    int t ;cin>>t;
   
    while(t--){
         bool flag = false;
        int n;cin>>n;// size of word
        string word;cin>>word;
        if(n<4)flag = false;
        else
            {
                for(int i=0;i<n;i++){
                    int streak=0;
                    while(check_vowel(word[i])==false){
                        if(streak>=4){
                            flag = true;
                            break;
                        }
                        i++;
                        streak++;
                    }
                    if(flag)break;
                }
                
            }
        
        flag==true?cout<<"NO":cout<<"YES";
        cout<<endl;
    }
return 0;
}

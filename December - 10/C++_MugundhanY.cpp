//Question 10:
#include <bits/stdc++.h>
using namespace std;
 
void pronounce(char word[], int n){
    int count = 0;
    for(size_t i = 0; i < n; i++){
        if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u'){
            count++;
            if(count == 4){
                cout << "NO" <<endl;
                return;
            } 
        } else {
                count = 0;
        }
    }
    cout << "YES" << endl;
}
 
int main(){
    int T;
    cin >> T;
    
    while(T>0){
        int n;
        cin >> n;
        
        char word[n];
        for(int i=0; i<n; i++){
            cin >> word[i];
        }
        
        pronounce(word, n);
        T--;
    }
  return 0;
}

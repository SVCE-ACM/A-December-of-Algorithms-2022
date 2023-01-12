//Question 19:
#include <bits/stdc++.h>
using namespace std;

void ans(char substring1[], int n1, char substring2[], int n2){
    unordered_map<char, int> map;
    cout << "\"";
    for(int i=0; i<n2; i++){
        map[substring2[i] - 'a']++;
    }
    for(int i =0 ; i<n1; i++){
        if(map[substring1[i] - 'a'] > 0){
            cout << substring1[i];
            map[substring1[i] - 'a']--;
        }
    }
    cout << "\"";
}

int main(){
    int n1=0, n2=0, n = 3;
    char main_string[1000000];
    char substring1[1000000];
    char substring2[1000000];
    for(int i=0; i<1000000; i++){
        cin >> main_string[i];
    }
    for(int i=1; i<1000000; i++){
        if(n==0){
            break;
        } else if(main_string[i] == '"'){
            n--;
        }else if((main_string[i] >= 65 && main_string[i] <= 90) || (main_string[i] >= 97 && main_string[i] <= 122)){
            if(n == 3){
                substring1[n1] = main_string[i];
                n1++;
            }else if(n == 1){
                substring2[n2] = main_string[i];
                n2++;
            }
        }
    }
    transform(substring1, substring1+n1+1, substring1, ::tolower);
    transform(substring2, substring2+n2+1, substring2, ::tolower);
    ans(substring1, n1, substring2, n2);
    return 0;
}

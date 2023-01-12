//Question 11:
#include <bits/stdc++.h>
using namespace std;

int count1(char character[]){
    for(int i=0; i<100000; i++){
        if(character[i]=='1' || character[i]=='2') return i;
    }
    return 0;
}

int count2(char character[]){
    for(int i=0; i<100000; i++){
        if(character[i]=='\0') return i; 
    }
    return 0;
}

int monkeycount(char character[], int n1, int n2, int jump[]){
    int pos = 0;
    for(int i =0; i<n2-n1; i++){
        pos += jump[i];
        if(character[pos] == '~') return i;
     }
     return -1;
}
    
int main() {
  char character[100000];
  for(int i=0; i<100000; i++){
      cin >> character[i];
  }
  
  int n1 = count1(character);
  int n2 = count2(character);
  int jump[n2-n1];
  for(int i = n1; i<n2; i++){
      jump[i-n1] = character[i] - 48;
  }
  
  cout << monkeycount(character, n1, n2, jump);
  return 0;
}

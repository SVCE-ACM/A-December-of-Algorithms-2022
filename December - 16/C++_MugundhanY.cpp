//Question 16:
#include <bits/stdc++.h>
using namespace std;

int getinputno(int hist[10000]){
    for(int i=0 ;i<10000; i++){
        if(hist[i] == 0 && hist[i+1] == 0 && hist[i+2] == 0) return i;
    }
}

int getMaxArea(int arr[], int n){
    int maxarea;
    for(int i = n-1;i>=0; i--){
        for(int j = 0; j<i; j++){
            int area = min(arr[i], arr[j]);
            maxarea = max(maxarea, area*(i-j));
        }
    }
    return maxarea;
}

int main(){
    int hist[10000];
    for(int i=0; i<10000; i++){
        cin >> hist[i];
    }
    int n = getinputno(hist);
    
    cout << getMaxArea(hist, n);
    return 0;
}

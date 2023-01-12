//Question 6:
#include <bits/stdc++.h>
using namespace std;

void swapped(int n, int arr[], string name1){

    int turns = 0;
    string name2;
    
    if(name1 == "Bob") name2 = "Tanika";
    else name2 = "Bob";
    
    while(arr[0]>0){
        arr[0] -= 1;
        swap(arr[0], arr[n-1]);
        turns++;
    }
    
    if(turns % 2 != 0) cout << name1;
    else cout << name2;
    cout << " wins the game!" << endl;
    
    if(turns % 2 != 0) cout << name2;
    else cout << name1;
    cout << " loses the game!";
    
}

int main() {
    cout << "Position=";
    int position;
    cin >> position;
    
    cout << "Set of numbers:";
    int arr[position];
    for(int i=0; i<position; i++){
        cin >> arr[i];
    }
    
    cout << "Player going first:";
    string name;
    cin >> name;
    
    swapped(position, arr, name);
    
    return 0;
}

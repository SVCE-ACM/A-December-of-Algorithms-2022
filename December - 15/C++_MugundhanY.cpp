//Question 15:
#include <bits/stdc++.h>
using namespace std;

void timediff (string arr[3][2]){
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(arr[j][1] < arr[i][1]){
	            swap (arr[j][1], arr[i][1]);
	            swap (arr[j][0], arr[i][0]);
	    }
	}
    }
}

int main (){
    string arr[3][2];
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
	    cin >> arr[i][j];
	}
    }

    timediff (arr);
    
    cout << arr[0][0] << ",";
    cout << " " << arr[1][0] << ",";
    cout << " " << arr[2][0] << ".";
    
  return 0;
}

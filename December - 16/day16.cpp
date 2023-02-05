#include <bits/stdc++.h>
using namespace std;

vector<int> input(int);
int maxPossibleVolume(vector<int>&, int);

int main(){
    int n;
    cin>>n;

    vector<int> water = input(n);
    cout<<"Max Volume this container can hold: "<<maxPossibleVolume(water, n);
}

int maxPossibleVolume(vector<int>& water, int n){
    int s=0, e=n-1;
    int volume = 0;
    int currentVolume = 0;

    for(int f=0, r=e; f<n && r>=0; f++, r--){
        if(water[s]<water[f]){
            s=f;
        }
        if(water[e]<water[r]){
            e=r;
        }
        currentVolume = min(water[s],water[e]) * abs(s-e); 
        if(volume < currentVolume) { 
            volume = currentVolume;
        }
    }
    return volume;
}

vector<int> input(int n){
    vector<int> water(n);
    for(int j=0; j<n; j++)
        cin>>water[j];
    return water;
}

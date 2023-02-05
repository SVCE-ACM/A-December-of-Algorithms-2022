#include<iostream>

using namespace std;
int main(){
    int numRows;
    string s;
    cout<<"Enter String and number of Rows";
    cin>>s>>numRows;

    if(numRows==1)
        cout<<s;
    string ret;
    int increment=0;

    for(int i =0;i<numRows;i++){
        increment=2*(numRows-1);
        for(int j=i;j<s.length();j+=increment){
            ret+=s[j];
            if(i>0 && i<(numRows-1) && (j+increment-2*i)<s.length()){
                ret+=s[j+increment-2*i];                     
            }
        }
    }
    cout<<ret;
    return 0;        
}
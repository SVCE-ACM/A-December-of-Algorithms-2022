#include <bits/stdc++.h>
using namespace std;
class Compare
{
public:
    bool operator()(pair<string,string> a, pair<string,string> b)
    {
        string aa="";
        string bb ="";
        for(int i=0;i<8;i++){
            if(i!=2 and i!=5){
                aa += a.second;
                bb += b.second;
            }
        }
        int A = stoi(aa);
        int B =stoi(bb);
        return A>B;
    }
};
int main() {
    // INPUT IN BELOW FORMAT
    // Wes 12:00:30
    // Michella 12:03:40
    // Asher 12:00:01
   
    // Priority queue is defined using the custom comparator
    priority_queue<pair<string,string>,vector<pair<string,string>>,Compare> minHeapBySecondEl;
    int n;
    
    
    for(int i=0;i<3;i++)
    {
        
        string a,b;
        cin>>a>>b;
        minHeapBySecondEl.push({a,b});
    }
    
    cout<<"Output:"<<endl;
    
    // The loop while queue is empty
    while(!minHeapBySecondEl.empty())
    {
        // Prints and pops the element in the top of the queue
        pair<string,string> top=minHeapBySecondEl.top();
        minHeapBySecondEl.pop();
        cout<<"("<<top.first<<","<<top.second<<")"<<endl;
    }
    return 0;
}

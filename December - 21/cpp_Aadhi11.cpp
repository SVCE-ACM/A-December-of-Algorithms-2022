#include <iostream>
using namespace std;
#include <stack>
#include <cmath>

int transfer_disk(stack<int>& a,stack<int>& b){
    if(b.empty()==true){
        b.push(a.top());
        a.pop();
        return 1;
    }
    else if(a.empty()==true){
        a.push(b.top());
        b.pop();
        return 2;
    }
    else{
        if(b.top()>a.top()){
            b.push(a.top());
            a.pop();
            return 1;
        }
        else{
            a.push(b.top());
            b.pop();
            return 2;
        }
    }
}

int main(){
    stack<int> s,a,d;
    int n=0;
    cout<<"Number of discs: ";
    cin>>n;
    for(int i=n;i>=1;i--){
        s.push(i);
    }
    
    int x=pow(2,n)-1;
    int i=1;
    cout<<endl<<"The sequence of moves :"<<endl;;
if(n%2==0){
    while(i<=x){
            if(i%3==1){
            int y=transfer_disk(s,a);
            if(y==1){
                cout<<"Move the disk "<<a.top()<<" from tower I to tower II"<<endl;
            }
            else
                cout<<"Move the disk "<<s.top()<<" from tower II to tower I"<<endl;
            }
            else if(i%3==2){
            int y=transfer_disk(s,d);
            if(y==1){
                cout<<"Move the disk "<<d.top()<<" from tower I to tower III"<<endl;
            }
            else
                cout<<"Move the disk "<<s.top()<<" from tower III to tower I"<<endl;
            }
            else{
            int y=transfer_disk(a,d);
            if(y==1){
                cout<<"Move the disk "<<d.top()<<" from tower II to tower III"<<endl;
            }
            else
                cout<<"Move the disk "<<a.top()<<" from tower III to tower II"<<endl;
            }
            i++;
    }
}
else{
    while(i<=x){
            if(i%3==1){
            int y=transfer_disk(s,d);
            if(y==1){
                cout<<"Move the disk "<<d.top()<<" from tower I to tower III"<<endl;
            }
            else
                cout<<"Move the disk "<<s.top()<<" from tower III to tower I"<<endl;
            }
            else if(i%3==2){
            int y=transfer_disk(s,a);
            if(y==1){
                cout<<"Move the disk "<<a.top()<<" from tower I to tower II"<<endl;
            }
            else
                cout<<"Move the disk "<<s.top()<<" from tower II to tower I"<<endl;
            }
            else{
            int y=transfer_disk(a,d);
            if(y==1){
                cout<<"Move the disk "<<d.top()<<" from tower II to tower III"<<endl;
            }
            else
                cout<<"Move the disk "<<a.top()<<" from tower III to tower II"<<endl;
            }
            i++;
    }
}

return 0;
}


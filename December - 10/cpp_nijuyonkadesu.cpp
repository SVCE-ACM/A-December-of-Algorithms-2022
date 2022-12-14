#include<iostream>

using namespace std;
void result();

int main() {
    int count;
    cout<<"Enter no of words: ";
    cin>>count;
    cin.ignore();
    
    for(int i=0; i<count; i++)
        result();
}

void result() {
    char ch;
    int count = 0;
    bool continous_trigger = false;
    do{
        ch=getchar();
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u'){
            count++;
            if(count==4) continous_trigger=true;
        }
        else
            count = 0;
    }while(ch!='\n');
    
    if(continous_trigger)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}

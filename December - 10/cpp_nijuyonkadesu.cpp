#include<iostream>

using namespace std;
void result();

int main() {
    int count;
    cout<<"Enter no of words: ";
    cin>>count;
    cin.ignore(); // to prevent a edge case, try commenting this line and run ^_^
    
    for(int i=0; i<count; i++)
        result();
}

void result() {
    char ch;
    int count = 0;
    bool continous_trigger = false;
    // gets character by character, but only until the user hits enter
    // so, now you've checked a whole word while reading input from the user
    do{
        ch=getchar();
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u'){
            count++;
            if(count==4) continous_trigger=true; // the moment it detects 4 continous non vowels, the flag is set
        }
        else
            count = 0;
    }while(ch!='\n');
    
    if(continous_trigger)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}

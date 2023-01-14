#include<iostream>
#include<cstring>
#include<list>
using namespace std;
int main(){
    cout<<endl;
    list<char> s{'k','i','p','e','d','i','a','w','i','a','e'}; 
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it;
    }
    cout<<endl;
    s.pop_back();
    s.pop_back();
    auto t = s.end();
    t--;
    s.push_front(*t);
    t--;
    s.push_front(*t);
    s.pop_back();
    s.pop_back();
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it;
    }
    
    return 0;
}
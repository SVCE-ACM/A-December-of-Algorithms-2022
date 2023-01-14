#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;


int main() {
		int t;
		cin>>t;
		while(t)
		{
			int n;
			cin>>n;
			int a[n];
			int w[n];
			for(int i=0;i<n;i++)
				cin>>a[i];
			for(int i=0;i<n;i++)
				cin>>w[i];
			set<pair<int,long long> > s;
			s.insert(pair<int,long long>(0,0));
			for(int i=0;i<n;i++)
			{
				pair<int,long long> p =make_pair(a[i],0);
				
				set<pair<int,long long> >::iterator it = s.lower_bound(p);
				it--;
				pair<int,long long> p1 = make_pair(a[i],w[i]+it->second);
				it++;
				vector<pair<int,long long> > v;
				bool valid = true;
				while(it != s.end())
				{
					if((it->first == a[i]) && (it->second >= p1.second))
					{
						valid = false;
						break;
					}
					else if(it->second <= p1.second)
					{
						v.push_back(*it);
						it++;
					}
					else
						break;
				}
				for(vector<pair<int,long long> > ::iterator itv = v.begin();itv != v.end(); itv++)
				{
					s.erase(*itv);
				}
				if(valid)
					s.insert(p1);
			}
				cout<<s.rbegin()->second<<endl;

				t--;
		}
	    return 0;
}
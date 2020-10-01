#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		ll n,s,a,b;
		cin>>n;
		map<int,int> mp;
		
		map<int,int>::iterator it;
		for(int i=0;i<n-1;i++)
		{
			cin>>a>>b;
			mp[b]++;
		}
		int c=0;
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second>1)
			c+=it->second-1;
		}
		cout<<c<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		ll n,s;
		cin>>n>>s;
		ll ar[n],br[n];
		vector<int> v1,v2;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>br[i];
			if(br[i]==0)
			v1.push_back(ar[i]);
			else
			
			v2.push_back(ar[i]);
		}
		ll res=100-s;
		ll min1=INT_MAX;
//		for(int i=0;i<v1.size();i++)
//		{
//			min1=min(v1[i]);
//		}
		ll min2=LONG_MAX;
		for(int i=0;i<v2.size();i++)
		{
			min2=min(v2[i],min2);
		}
		
		//cout<<s<<"\n";
		if(min1+min2<=res)
		cout<<"yes";
		else
		cout<<"no";
		cout<<endl;
	}
}

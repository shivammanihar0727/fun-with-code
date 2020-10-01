#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
			ll n,a,k;
			cin>>n;
			int ar[n];
			map<int,int> mp;
			
			map<int,int>::iterator it;
			for(int i=0;i<n;i++)
			{
				cin>>ar[i];
				mp[ar[i]]++;
			}
			if(mp.size()==n)
			{
				cout<<"YES";
				cout<<endl;
				for(it=mp.begin();it!=mp.end();it++)
				cout<<it->first<<" ";
			}
			else
			{
				int c=0,f=0,d=0,b;
				vector<int> v;
				for(it=mp.begin();it!=mp.end();it++)
				{
					if(it->second==1)
					{
						c++;
						b=it->first;
						
					}
					else if(it->second==2)
					{
						d++;
						v.push_back(it->first);	
					}
					if(c>1)
					{
						f=1;
						break;
					}
				}
				if(f==1&&d!=n/2)
					cout<<"NO";
				else if(d==n/2)
				{
					cout<<"YES";
					cout<<endl;
					vector<int> v1;
						for(int i=0;i<v.size();i++)
						{
							v1.push_back(v[i]);
						}
					if(c==1)
						v1.push_back(b);
						reverse(v.begin(),v.end());
						for(int i=0;i<v.size();i++)
						{
							v1.push_back(v[i]);
						}
						for(int i=0;i<v1.size();i++)
						{
							cout<<v1[i]<<" ";
						}
				}
				else
				{
					cout<<"NO";
				}
			}
			
			cout<<endl;
				
	}


}

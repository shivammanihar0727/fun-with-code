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
		cin>>n;
		ll ar[n],br[n];
		vector<int> v1,v2;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		int f=0;
		for(int i=0;i<n;i++)
		{ 
			if(ar[i]==i+1)
			{
				continue;	
			}
			else if((i+1)%ar[i]!=0)
			{
				f=1;
			}
		}
		if(f==1)
		cout<<"NO";
		else
		cout<<"YES";
		cout<<endl;
	}
}

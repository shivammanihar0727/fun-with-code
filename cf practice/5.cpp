#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,f=0,ans;
		cin>>n>>k;
		ll ar[n],min1=LONG_MAX;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			min1=min(min1,ar[i]);	
		}
		ll res=min1+k;
			for(int i=0;i<n;i++)
		{
			
			ans=abs(res-ar[i]);
			if(ans>k)
			{
				f=1;
				break;
			}	
		}
		if(f)
		cout<<-1;
		else
		cout<<res;
		cout<<endl;
	}
}

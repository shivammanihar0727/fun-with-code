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
		int f=0;
		ll ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]!=i+1)
			f=1;
		}
		if(f==1)
		cout<<"NO";
		else
		cout<<"YES";
		cout<<endl;
	}
}

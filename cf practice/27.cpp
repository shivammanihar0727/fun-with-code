#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll ar[n],sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>ar[i];
		if(ar[i]>k)
		sum+=2;
		else
		sum+=1;
		
	}
	cout<<sum;
	
}

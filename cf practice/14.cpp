#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,k,c=0;
	cin>>n>>k;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ans=a[k];

	
		for(int i=1;i<=n;i++)
	{
		if(a[i]>=ans&&a[i]>0)
		c++;
	}
	

	cout<<c<<endl;
}

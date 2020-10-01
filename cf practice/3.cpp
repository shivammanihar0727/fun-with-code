#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll r,g,b,sum=0,mx;
		cin>>r>>g>>b;
		sum=r+g+b;
		mx=max({r,g,b});
		sum=sum-mx;
		if(sum>=mx-1)
		cout<<"Yes";
		else
		cout<<"No";
		cout<<endl;
	}
}

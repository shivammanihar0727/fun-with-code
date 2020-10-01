#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int ans=abs(a-b);
		if(ans%10==0)
		ans=ans/10;
		else
		ans=ans/10+1;
		cout<<ans;
		cout<<endl;
	}
	
}

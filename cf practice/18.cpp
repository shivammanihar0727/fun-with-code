#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
			ll n,a,k;
			cin>>n>>k;
			if(n<=k)
			cout<<1;
			else
			{
				ll rem=n%k;
				ll ans=n/k;
			cout<<rem<<" ";
				if(rem!=0&&rem%2==0)
				ans=ans+1;
				else if(rem!=0)
				ans+=2;
				cout<<ans;
			}
			cout<<endl;
				
	}


}

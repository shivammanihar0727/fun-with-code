#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	
		ll n,k,l,c,d,p,nl,np,sum=0,mx;
		cin>>n>>k>>l>>c>>d>>p>>nl>>np;
		ll orfr=k*l;
		ll mk=orfr/nl;
		ll li=c*d;
		ll to=p/np;
		ll ans=min({mk,li,to})/n;
		cout<<ans;
		
	
}

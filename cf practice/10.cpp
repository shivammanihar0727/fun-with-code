#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
					
		ll n;
		cin >> n;
		
		ll ce=0,co=0,nn;
		cin>>nn;
		while(nn!=0)
		{
		
		int rem=nn%10;
		
				if(rem%2==0)
				ce++;
				else
				co++;
				nn/=10;
	}
			
			if(ce>=co)
			{
				cout<<2;
			}	
					else 
					cout<<1;	
	
		
		cout<<endl;
			
	}
	return 0;
	
}

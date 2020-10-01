#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==b&&b==c&&c==d)
	{
		cout<<a<<" "<<0<<" "<<0;
	}
	else
	{
			
			if(abs(a-b)!=0)
			{
				cout<<abs(a-b)<<" ";
			}
			else
			{
				cout<<a/2<<" ";
			}
			if(abs(a-c)!=0)
			{
				cout<<abs(a-c)<<" ";
			}
			else
			{
				cout<<a/2<<" ";
			}
				if(abs(a-d)!=0)
			{
				cout<<abs(a-d)<<" ";
			}
			else
			{
				cout<<a/2<<" ";
			}		
	}
}

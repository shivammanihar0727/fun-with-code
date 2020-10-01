#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ce=0,co=0,ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			if(i%2==0&&ar[i]==1)
			ce++;
			else if(i%2==1&&ar[i]==1)
			co++;
		}
		int ans=abs(ce-co);
		if(ans==0)
		{
				for(int i=0;i<n;i++)
			{
				cout<<ar[i]<<" ";
			}	
		}
		else
		{
				for(int i=0;i<ans;i++)
			{
				cout<<"1 ";
			}	
		}
		
		cout<<endl;
	}
}

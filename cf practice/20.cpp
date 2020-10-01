#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans;
	cin>>n;
	set<int> s;
	for(int i=n+1;i<=9000;i++)
	{
		s.clear();
		int nn=i;
		while(nn!=0)
		{
			s.insert(nn%10);
			//cout<<nn%10<<" ";
			nn/=10;
		}
		//cout<<s.size()<<" ";
		if(s.size()==4)
		{
			ans=i;	
			break;
		}
	}
	cout<<ans;
}

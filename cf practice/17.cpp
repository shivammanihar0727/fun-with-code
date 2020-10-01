#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int ar[6][6],poi,poj;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>ar[i][j];
			if(ar[i][j]==1)
			{
				poi=i;
				poj=j;
			}
		}
	}
	int sum=abs(2-poi)+abs(2-poj);
	cout<<sum;
}

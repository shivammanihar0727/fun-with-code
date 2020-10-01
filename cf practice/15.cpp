#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,k,c=0;
	cin>>n;
	while(n--)
	{
				
		string s;
		cin>>s;
		string s1="++X",s4="X--",s3="--X",s2="X++";
		if(s1==s||s2==s)
		c++;
		else
		c--;

	}

	cout<<c<<endl;		
				

}

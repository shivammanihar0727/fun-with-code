#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b,c,d;
	cin>>n;
	string s;
	
	cin>>s;
	if(n<26)
	cout<<"NO";
	else
	{
		set<char> ss;
		for(int i=0;i<s.length();i++)
		{
			if(isupper(s[i]))
			{
				char ch;
				ch=tolower(s[i]);
				
				ss.insert(ch);
			}
			else
			ss.insert(s[i]);
		}
		//cout<<ss.size();
		if(ss.size()==26)
		cout<<"YES";
		else
		cout<<"NO";
	}
}

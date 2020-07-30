#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
		cin.tie(0);
	string x;
	cin>>x;
	ll n;
	n=x.length();
	ll tot=0;
	ll i;
	for(i=0;i<n;i++)
	{
		if (x[i]=='a')
		{
			tot=tot+1;
		}
		else if('e'==x[i])
		{
			tot=tot+1;
		}
		else if('i'==x[i])
		{
			tot=tot+1;	
		}	
		else if ('o'==x[i])
		{
			tot=tot+1;
		}
		else if ('u'==x[i])
		{
			tot=tot+1;
		}
	}
		cout<<tot<<"\n";
		return 0;
}

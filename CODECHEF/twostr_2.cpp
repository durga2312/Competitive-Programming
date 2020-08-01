#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	ll i;
	ll n;
	string x;
	string y;
	for (i=0;i<t;i++)
	{
	cin>>x;
	cin>>y;
	n=x.length();
	ll tot=0;
	ll j;
			for(j=0;j<n;j++)
			{
				if(x[j]==y[j])
				{
				tot=tot+1;
				}
				else if('?'==x[j])
				{
					tot=tot+1;
				}
				else if('?'==y[j])
				{
					tot=tot+1;
				}
			}	
		if(n==tot)
		{
			cout<<"Yes"<<"\n";
		}
		else
		{
			cout<<"No"<<"\n";
		}
	}
	return 0;
}

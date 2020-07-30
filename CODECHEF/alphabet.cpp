#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;	
	ll sl;
	sl=s.length();
	ll n;
	cin>>n;
	ll i;
	for(i=0;i<n;i++)
	{
		string y;
		cin>>y;
		ll l;
		ll tot=0;
		l=y.length();
		ll j;
		for(j=0;j<l;j++)
		{
			ll k;
			for(k=0;k<sl;k++)
			{
				if(s[k]==y[j])
				{
					tot=tot+1;
				}
			}
		}
			if (tot==l)
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

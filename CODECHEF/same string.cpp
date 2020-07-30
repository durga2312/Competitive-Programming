#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string x;
	cin>>x;
	string y;
	cin>>y;
	ll n;
	n=x.length();
	ll m;
	m=y.length();
	ll tot=0;
	if(m==n)
	{
		ll i;
		for(i=0;i<n;i++)
		{
			if(x[i]==y[i])
			{
				tot=tot+1;
			}
		}		
	}
	if (tot==n)
	{
		cout<<"same"<<"\n";
	}
	else
	{
		cout<<"not same"<<"\n";
	}
	return 0;
}

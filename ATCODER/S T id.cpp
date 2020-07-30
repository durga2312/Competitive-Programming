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
	bool ans=true;
	ll i;
	for(i=0;i<n;i++)
	{
		if(x[i]==y[i])
		{
			ans=true;		
		}
		else
		{
			ans=false;
			break;
		}
	}
	if(ans==true)
	{
		cout<<"Yes"<<"\n";	
	}
	else
	{
		cout<<"No"<<"\n";
	}		
	return 0;
}

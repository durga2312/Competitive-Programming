//https://atcoder.jp/contests/abc154/tasks/abc154_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	string t;
	cin>>t;
	ll a;
	cin>>a;
	ll b;
	cin>>b;
	ll aa;
	ll bb;
	string u;
	cin>>u;
	ll ls;
	ls=s.length();
	ll lu;
	lu=u.length();
	ll i;
	for(i=0;i<lu;i++)
	{
		if(s[i]==u[i])
		{
			aa=a-1;
			bb=b;
		}
		else
		{
			aa=a;
			bb=b-1;
		}
	}
	cout<<aa<<"\n";
	cout<<bb<<"\n";
	return 0;
}

//https://atcoder.jp/contests/abc154/tasks/abc154_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	ll n;
	n=s.length();
	ll i;
	for(i=0;i<n;i++)
	{
		s[i]='x';
	}
	for(i=0;i<n;i++)
	{
		cout<<s[i]<<"";
	}
	return 0;
}

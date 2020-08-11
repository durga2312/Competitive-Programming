//https://atcoder.jp/contests/abc172/tasks/abc172_b
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
	ll cnt=0;
	ll n;
	n=s.length();
	ll i;
	for(i=0;i<n;i++)
	{
		if(s[i]!=t[i])
		{
			cnt++;
		}
		else
		{
			cnt=cnt;
		}
	}
	cout<<cnt<<"\n";
	return 0;
}

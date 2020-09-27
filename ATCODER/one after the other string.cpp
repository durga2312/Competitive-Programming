//https://atcoder.jp/contests/abc148/tasks/abc148_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	string s;
	cin>>s;
	string t;
	cin>>t;
	ll i;
	vector<char> lis;
	for(i=0;i<n;i++)
	{
		lis.push_back(s[i]);
		lis.push_back(t[i]);
	}
	for(i=0;i<n*2;i++)
	{
		cout<<lis[i]<<"";
	}
	return 0;	
}

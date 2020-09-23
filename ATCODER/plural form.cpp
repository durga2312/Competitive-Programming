//https://atcoder.jp/contests/abc179/tasks/abc179_a
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	ll n;
	n=s.length();
	if(s[n-1]=='s')
	{
		s=s+"es";
	}
	else
	{
		s=s+"s";
	}
	cout<<s<<"\n";
	return 0;
}

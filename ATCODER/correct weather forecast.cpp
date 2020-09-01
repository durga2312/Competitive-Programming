//https://atcoder.jp/contests/abc139/tasks/abc139_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	string u;
	cin>>u;
	ll cnt=0;
	ll i;
	for(i=0;i<3;i++)
	{
		if(s[i]==u[i])
		{
			cnt=cnt+1;
		}
		else
		{
			cnt=cnt;
		}
	}
	cout<<cnt<<"\n";
	return 0;
	
}

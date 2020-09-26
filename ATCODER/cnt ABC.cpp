//https://atcoder.jp/contests/abc150/tasks/abc150_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	vector <char> lis;
	lis.resize(n);
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
	}
	ll cnt=0;
	for(i=0;i<n-2;i++)
	{
		if((lis[i]=='A')&&(lis[i+1]=='B')&&(lis[i+2]=='C'))
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

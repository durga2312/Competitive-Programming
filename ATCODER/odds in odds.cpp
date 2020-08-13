//https://atcoder.jp/contests/abc142/tasks/abc142_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	double x;
	ll p;
	if(n%2==0)
	{
		x=((double)1)/((double)2);
		cout<<x<<"\n";
	}
	else
	{
		p=n/2+1;
		x=((double)p)/((double)n);
		cout<<x<<"\n";
	}
	return 0;
}

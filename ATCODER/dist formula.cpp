//https://atcoder.jp/contests/abc174/tasks/abc174_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	double d;
	cin>>d;
	ll cnt=0;
	
	ll i;
	for(i=1;i<=n;i++)
	{
		double ans;
		double p1;
		cin>>p1;
		double p2;
		cin>>p2;
		ans=sqrt((p1*p1)+(p2*p2));
		if(ans<=d)
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

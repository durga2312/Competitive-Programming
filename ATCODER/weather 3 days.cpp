//https://atcoder.jp/contests/abc175/tasks/abc175_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<char> lis;
	lis.resize(3);
	ll cnt=0;
	ll i;
	for(i=0;i<3;i++)
	{
		cin>>lis[i];
	}
	if((lis[0]=='R')&&(lis[1]=='R')&&(lis[2]!='R'))
		{
			cnt=2;
		}
		else if((lis[0]!='R')&&(lis[1]=='R')&&(lis[2]=='R'))
		{
			cnt=2;
		}
		else if((lis[0]=='R')&&(lis[1]=='R')&&(lis[2]=='R'))
		{
			cnt=3;
		}
		else if((lis[0]=='R')&&(lis[1]!='R')&&(lis[2]=='R'))
		{
			cnt=1;
		}
		else if((lis[0]=='R')&&(lis[1]!='R')&&(lis[2]!='R'))
		{
			cnt=1;
		}
		else if((lis[0]!='R')&&(lis[1]=='R')&&(lis[2]!='R'))
		{
			cnt=1;
		}
		else if((lis[0]!='R')&&(lis[1]!='R')&&(lis[2]=='R'))
		{
			cnt=1;
		}
		else
		{
			cnt=0;
		}
	cout<<cnt<<"\n";
	return 0;
}

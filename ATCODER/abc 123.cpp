//https://atcoder.jp/contests/abc148/tasks/abc148_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll a;
	cin>>a;
	ll b;
	cin>>b;
	if((a==1)&&(b==2))
	{
		cout<<"3"<<"\n";
	}
	else if((a==2)&&(b==1))
	{
		cout<<"3"<<"\n";
	}
	else if((a==2)&&(b==3))
	{
		cout<<"1"<<"\n";
	}
	else if((a==3)&&(b==2))
	{
		cout<<"1"<<"\n";
	}
	else if((a==1)&&(b==3))
	{
		cout<<"2"<<"\n";
	}
	else
	{
		cout<<"2"<<"\n";
	}
	return 0;
}

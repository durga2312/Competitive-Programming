#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll r;
	cin>>r;
	ll ir=0;
	if(n>=10)
	{
		ir=r;
	}
	else
	{
		ir=r+(100*(10-n));
	}
	cout<<ir<<"\n";
	return 0;
}

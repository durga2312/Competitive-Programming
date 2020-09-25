//https://atcoder.jp/contests/abc178/tasks/abc178_b
#include<bits/stdc++.h>
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
	ll c;
	cin>>c;
	ll d;
	cin>>d;
	ll ans1;
	ll ans2;
	ll ans3;
	ll ans4;
	ans1=a*c;
	ans2=a*d;
	ans3=b*c;
	ans4=b*d;
	ll fans1;
	ll fans2;
	fans1=max(ans1,ans2);
	fans2=max(ans3,ans4);
	ll ff;
	ff= max(fans1,fans2);
	cout<<ff<<"\n";
	return 0;
}

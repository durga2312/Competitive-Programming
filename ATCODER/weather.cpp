//https://atcoder.jp/contests/abc141/tasks/abc141_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string x;
	cin>>x;
	if(x=="Sunny")
	{
		cout<<"Cloudy"<<"\n";
	}
	else if(x=="Cloudy")
	{
		cout<<"Rainy"<<"\n";
	}
	else
	{
		cout<<"Sunny"<<"\n";
	}
	return 0;
}

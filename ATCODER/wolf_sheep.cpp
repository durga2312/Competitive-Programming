#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll sheep;
	cin>>sheep;
	ll wolf;
	cin>>wolf;
	if(wolf>=sheep)
	{
		cout<<"unsafe"<<"\n";
	}
	else
	{
		cout<<"safe"<<"\n";
	}
	return 0;
}

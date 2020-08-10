#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	char x;
	cin>>x;
	ll xval;
	if(x!='z')
	{
	xval=(ll)x;
	xval=xval+1;
	char ans;
	ans=(char)xval;	
	cout<<ans<<"\n";
	}
	else
	{
		cout<<" "<<"\n";
	}
	return 0;
	
}

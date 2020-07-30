#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string lis;
	cin>>lis;
	bool ans=true;
	ll i;
	for(i=0;i<3;i++)
	{
		if(lis[i]=='7')
		{
			ans=true;
			break;
		}
		else
		{
			ans=false;
		}	
	}
	if(ans==true)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}

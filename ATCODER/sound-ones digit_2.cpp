#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
		ll x;
		cin>>x;
		ll p;
		p=x%10;
		if(p==2||p==4||p==5||p==7||p==9)
		{
			cout<<"hon"<<"\n";
		}
		else if(p==0||p==1||p==6||p==8)
		{
			cout<<"pon"<<"\n";
		}
		else
		{
			cout<<"bon"<<"\n";
		}
	return 0;
}

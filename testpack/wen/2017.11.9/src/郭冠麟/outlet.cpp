#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int n,t,i,x,s;
	cin>>n;
	while(n--)
	{
		cin>>t;s=0;i=t;
		while(t--)
		{
			cin>>x;
			s+=x;
		}
		cout<<s-i+1<<endl;
	}
	return 0;
}

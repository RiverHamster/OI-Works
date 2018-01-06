#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<fstream>
#include<algorithm>
using namespace std;
bool zs (int x)
{
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return 0;
	return 1;
}
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	int n,t,i,j,x,s;
	cin>>n;
	while(n--)
	{
		cin>>t;s=0;
		for(i=2;i<=t;i++)
		{
			while(!zs(i))
				i++;
			x=0;
			for(j=i;j<=t;j++)
			{
				if(x==t)
				{
					s++;
					break;
				}
				else if(x>t)
					break;
				if(zs(j))
					x+=j;
			}
		}
		if(zs(t))
			s++;
		cout<<s<<endl;
	}
	return 0;
}

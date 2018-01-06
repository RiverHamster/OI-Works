#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int n,t;
	long long s1,s2;
	cin>>n;
	while(n--)
	{
		cin>>t;s1=0;s2=0;
		while(t--)
		{
			s1+=2*(t+1)-1;
			s2+=(t+1)*3;
		}
		cout<<s1<<" "<<s2<<"\n";
	}
	return 0;
}

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t,k,s;
	char a[100005] 
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>k>>a;
		for(i=1;i<=strlen(s);i++)
			s+=a[i]-'0';
		cout<<n-s<<endl;
	}
	return 0;
}

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,x,s,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&x);
		a=x/10;
		if(a==0)
		{
			a=x/5;
			if(a==0)
				s=x;
			else
			{
				b=x%5;
				if(b==0)
					s=a;
				else
					s=a+b;
			}
		}
		else
		{
			b=x%10;
			if(b>0&&b<5)
				s=a+b;
			else if(b==0)
				s=a;
			else
				s=a+b%5+1;
		}
		cout<<s<<endl;
	}
	return 0;
}

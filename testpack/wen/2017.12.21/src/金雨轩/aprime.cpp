#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;
bool hs(int n)
{
	if(n==1) return 0;
	if(n==2) return 0;
	if(n==3) return 0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0) return 1;
		if(i>sqrt(n)) return 0;
	}
}
bool o[1000101];
int main ()
{
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	int n;
	scanf("%d",&n);
	int g,h,d,s=1,xb=0,y,ss=1;
	int a[100001];
	while(n--)
	{
		scanf("%d%d%d",&g,&h,&d);
		for(int i=g;i<=h;i++)
		{
			for(int j=g-d;j<=g+d;j++)
			{
				if(hs(j+i)&&!o[j]&&!o[i]&&j>=g&&j>=h){
				    s=0;
				    printf("%d %d",i,j);
				    o[i]=1;
				    o[j]=1;
				    break;
				}
			}
		}
				if(s==1)
			printf("None\n");
		s=1;
		ss=1;
		memset(o,0,sizeof(o));
	}
	return 0;
}


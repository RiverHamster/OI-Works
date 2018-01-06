#include <stdio.h>
#include <algorithm>
using namespace std;
int main ()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	int s=0;
	int y=n;
		for(int i=0;i<y;i++) scanf("%d%d",&a[i],&b[i]);
	s=n;
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
	        if(a[i]<=b[j]){s--;b[j]=0;}
	        int u=0;
	        for(int i=0;i<n;i++){if(a[i]==a[i+u]) s++; u++;}
			printf("%d\n",s);
}

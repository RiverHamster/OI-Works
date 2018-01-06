#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int t,start[1000],end[1000],m=0;
	scanf("%d",&t);
	int s=t;
	while (t--)
		scanf("%d %d",&start[m],&end[m++]);                         
	for (int i=0;i<t;i++)
		for (int j=i+1;j<t;j++)
			if (end[i]<start[j]||end[i]==start[j]) {s--;break;}
	printf("%d\n",s);
	return 0;
}
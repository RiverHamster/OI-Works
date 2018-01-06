#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int a[2][1005];
int b[3][1005];
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		scanf("%d %d",&a[0][i],&a[1][i]);
	}
	for (int i=0;i<t;i++){
		int min=0;
		for (int j=0;j<t;j++){
			if (a[1][j]<a[1][min]) min=j;
		}
		b[1][i]=a[1][min];
		b[0][i]=a[0][min];
		a[1][min]=10005;
	}
	int s=1,x=b[1][0];
	b[2][0]=1;
	for (int i=0;i<t;i++){
		for (int j=i+1;j<t;j++){
			if (b[0][j]>=x&&b[2][j]==0){
			    x=b[1][j];
				b[2][j]=1;
			}
		}
		x=-1;
		for (int j=0;j<t;j++){
			if (b[2][j]==0){
				x=b[1][j];
				b[2][j]=1;
				break;
			}
		}
		if (x==-1) break;
		s++;
	}
	printf("%d",s);
	return 0;
}
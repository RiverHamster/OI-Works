#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct Node{
	double c;
	int a;
}b[100005];
int t,i,l;
char a[100005];
double x,y;
int cmp(Node x,Node y){
	return x.c<y.c;
}
int main()
{
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
	scanf("%d\n",&t);
    while(t--){
		scanf("%s\n",a+1);l=strlen(a+1);
		memset(b,0,sizeof(b));
		b[0].c=0.5;x=0;y=1;
		for(i=1;i<=l;i++){
			b[i].a=i;
			b[i].c=(x+y)/2;
			if(a[i]=='l')
				y=(x+y)/2;
			else
				x=(x+y)/2;
		}
	    sort(b+1,b+l+1,cmp);
	    for(i=1;i<=l;i++) printf("%d ",b[i].a);
		printf("\n");
	}
    return 0;
}


#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
struct Node{
    int c,d;
}a[1005];
int n,i,j,s,l,m,ok,r[1005];
int cmp(Node x,Node y){
    if(x.c!=y.c) return x.c<y.c;
    return x.d<y.d;
}
int read(){
    int a;
    char c=getchar();
    while(c<'0'&&c>'9') c=getchar();
    a=c-'0';c=getchar();
    while(c>='0'&&c<='9'){
        a=a*10+c-'0';
        c=getchar();
    }
    return a;
}
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
    n=read();
    for(i=1;i<=n;i++){
        a[i].c=read();a[i].d=read();
	}
    sort(a+1,a+n+1,cmp);m=1;
    for(i=1;i<=n;i++){
		ok=1;
		for(j=1;j<=m&&ok;j++){
			if(a[i].c>=r[j]){
				r[j]=a[i].d;
				ok=0;
			}
		}
		if(ok) r[++m]=a[i].d;
    }
	printf("%d\n",m);
    return 0;
}


#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int n,ans,b[1005];
struct Node{
	int b,f;
	}a[1005];
bool cmp(Node p,Node q){
	if(p.b!=q.b)
		return p.b<q.b;
	return p.f<q.f;
	}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d %d",&a[i].b,&a[i].f);
	}
	sort(a+1,a+1+t,cmp);
	ans=1;
	b[ans]=a[1].f;
	for(i=2;i<=t;i++){
		int j;
		for(j=1;j<=ans;j++)
			if(b[j]<=a[i].b){
				b[j]=a[i].f;
				break;
				}
				if(j>ans)
					b[++ans]=a[i].f;
					sort(b+1,b+1+ans);
		}	
	printf("%d",ans);
	return 0;
	}

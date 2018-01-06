#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int l[100005]={0};
int a[100005]={0};
int b[100005]={0};
int c[100005]={0};
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while(t--){
		int ans=200005,x;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&x);
			l[i]=x;
			a[i]=x+a[i-1];
		}
		int k=1;
		for(int i=n;i>=1;i--){
			b[k]=b[k-1]+l[i];
			c[i]=b[k];
			k++;
		}
		for(int i=1;i<=n;i++){
			ans=min((a[i]+c[i]),ans);
		}
		printf("%d\n",ans);
	}
}

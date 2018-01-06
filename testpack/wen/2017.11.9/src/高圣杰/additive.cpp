#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int t,m,a[1001],p,sum,i;
char c;
inline void dfs(int i,int k){
	if(p==k) sum++;
	else if(i<=m&&p<k){
		dfs(i+1,k);
		p+=a[i];
		dfs(i+1,k);
		p-=a[i];
	}
}
inline int read(int &x){
	x=0;
	c=getchar();
	while(c<'0'||c>'9') c=getchar();
	while(c>='0'&&c<='9'){
		x=x*10+c-'0';
		c=getchar();
	}
}
inline bool cmp(int i,int j){
	return i>j;
}
int main(){
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	read(t);
	while(t--){
		read(m);
		for(i=1;i<=m;i++)
		read(a[i]);
		sum=0;
		sort(a+1,a+1+m,cmp);
		for(i=1;i<=m;i++)
		dfs(i+1,a[i]);
		printf("%d\n",sum);
	}
}

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int t,n,a[100001],m;
inline void dfs(int i,int x,int y){
	if(i>n){
		if(m>abs(x-y)) m=abs(x-y);
		return;
	}
	if(x-y>=a[i]) dfs(i+1,x,y+a[i]);
	else if(y-x>=a[i]) dfs(i+1,x+a[i],y);
	else{
		dfs(i+1,x+a[i],y);
		dfs(i+1,x,y+a[i]); 
	}
}
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	cin>>t;
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		m=10000000;
		dfs(1,0,0);
		printf("%d\n",m);
	}
}

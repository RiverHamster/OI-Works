#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;
char c;
inline int read(ll &x){
	x=0;
	c=getchar();
	while(c<'0'||c>'9') c=getchar();
	while(c>='0'&&c<='9'){
		x=x*10+c-'0';
		c=getchar();
	}
}
ll minx,sum,n,t,i,k;
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	read(t);
	while(t--){
		read(n);
		minx=10000001;
		sum=0;
		for(i=1;i<=n;i++){
			read(k);
			if(minx>k) minx=k;
			sum+=k;
		}
		cout<<sum+minx<<endl;
	}
}

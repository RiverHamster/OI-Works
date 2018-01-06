#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int t,n,m,d,a[1005];
bool ok,b[1005];
bool isp(int n){
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return 1;
	return 0;
}
void dfs(int i,int k,int sum){
	if(k>2&&isp(sum))
		return;
	if(i>m-n+1){
		ok=1;
		return;
	}
	if(k>d){
		sum-=a[i-3];
		k=d;
	}
	for(int j=n;j<=m;j++)
		if(!b[j]){
			a[i]=j;
			b[j]=1;
			dfs(i+1,k+1,sum+a[i]);
			if(ok)
				return;
			a[i]=0;
			b[j]=0;
		}
}
void out(){
	for(int i=1;i<=m-n+1;i++)
		printf("%d ",a[i]);
	cout<<endl;
}
int main(){
    freopen("aprime.in","r",stdin);
    freopen("aprime.out","w",stdout);
    cin>>t;
	while(t--){
		ok=0;
		cin>>n>>m>>d;
		for(int i=n;i<=m;i++){
			a[1]=i;
			b[i]=1;
			dfs(2,2,a[1]);
			if(ok)
				break;
			a[1]=0;
			b[i]=0;
		}
		if(ok)
			out();
		else
			cout<<"None"<<endl;
	}
    return 0;
}

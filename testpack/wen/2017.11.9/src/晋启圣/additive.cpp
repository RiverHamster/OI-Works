#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
bool b[10000005];
int t,n,sum,ans,a[35];
void dfs(int x,int i,int sum){
	if (sum>=a[x]){
		if (sum==a[x]) ans++;
	}
	else for (int j=i+1;j<=n;j++)
		       if (!b[j]){
			       b[j]=1;
			       dfs(x,j,sum+a[j]);
			       b[j]=0;
		    }
}
int main(){
    freopen("additive.in","r",stdin);
    freopen("additive.out","w",stdout);
	cin>>t;
	while(t--){
		cin>>n;
		ans=sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		for(int i=1;i<=n;i++){
			if(a[i]<=sum-a[i]){
					b[i]=1;
					dfs(i,0,0);
					b[i]=0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

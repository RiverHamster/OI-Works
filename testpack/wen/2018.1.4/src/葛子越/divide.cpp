#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define Int(a) scanf("%d",&a)
#define open(a,b) freopen(a,"r",stdin),freopen(b,"w",stdout)
bool dp[50005];
int a[55];
int main(){
	open("divide.in","divide.out");
	int t,n,i,j,sum,maxi;
	Int(t);
	while(t--){
		Int(n);
		sum=0;
		maxi=0;
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(i=1;i<=n;i++){
			Int(a[i]);
			sum+=a[i];
		}
		for(i=1;i<=n;i++){
			for(j=sum/2;j>=a[i];j--){
				if(dp[j-a[i]]){
					dp[j]=true;
					maxi=max(maxi,j);
				}
			}
		}
		printf("%d\n",(sum-maxi)-maxi);
	}
	return 0;
}


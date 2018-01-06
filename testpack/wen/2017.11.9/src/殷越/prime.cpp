#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t,n,a[3000],ans,c=1,x=0;
int main(){
	//freopen("prime.in","r",stdin);
	//freopen("prime.out","w",stdout);
	scanf("%d",&t);
	for(int k=0;k<t;k++){
		scanf("%d",&n);
		a[0]=2;
		for(int i=3;i<=n;i+=2){
			for(int j=2;j<i;j++){
				if(i%j==0){
					x=1;
					break;
				}
			}
			if(x==1){
				x=0;
				continue;
			}
			a[c]=i; 
			c++;
		}
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				x+=a[i];
				printf("%d ",x);
				if(x==n){
					printf("!%d %d!",i,j);
					ans++;
					x=0;
					break;
				}
			}
			x=0;
		}
	}
	printf("%d",ans);
	return 0;
}

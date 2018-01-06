#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int n,sum=0,x,t;
	cin>>t;
	while(t--){
		int s=1;
		sum=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&x);
			if(x==1) s++;
			else sum+=x;
		}
		printf("%d\n",sum-n+s);
	}
}

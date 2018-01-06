#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
using namespace std;
int t,n,zs[1300],ans,s;
bool isp(int x){
	for(int i=3;i<=sqrt(x);i+=2){
		if(x%i==0)return 0;
	}
	return 1;
}
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	scanf("%d",&t);
	zs[0]=2;
	for(int i=3,j=1;i<=10000;i+=2){
		if(isp(i))zs[j++]=i;
	}
	while(t--){
		scanf("%d",&n);ans=0; 
		for(int i=0;zs[i]<=n;i++){s=0;
			for(int j=i;s<=n;j++){
				if(s==n){ans++;break;}
				s+=zs[j];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}

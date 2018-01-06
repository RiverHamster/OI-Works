#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
using namespace std;
int num[10],k,t,he;char x;
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d\n",&k);
		memset(num,0,10);he=0;int now=0;bool ok=0;
		while(scanf("%c",&x)!='\n'){
			num[x-'0']++;he+=x-'0';
		}
		if(he>=k)printf("0\n");
		for(int i=1;i<10;i++){
			while(num[i]){
				now+=9+i;
				if(now>=k){ok=1;break;}
			}
			if(ok)break;
		} 
		printf("%d\n",now-k);
	}
	return 0;
}


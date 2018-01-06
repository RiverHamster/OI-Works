//#include<iostream>
//#include<algorithm>
//#include<cmath>
#include<cstdio>
#include<cstring>
//#include<cstdlib>
//#include<ctime>
//#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
//using namespace std;
int t,now,ans[100005],l;char c[100005];
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	scanf("%d\n",&t);
	while(t--){
		memset(c,0,sizeof(c));
		scanf("%s",c);l=strlen(c);now=1;
		for(int i=0,a=1,b=l;i<l;i++){
			if(c[i]=='r')ans[a++]=now++;
			else ans[b--]=now++;
		}
		for(int i=1;i<=l;i++){
			printf("%d ",ans[i]);
		}
		printf("\n");
	}
	return 0;
}


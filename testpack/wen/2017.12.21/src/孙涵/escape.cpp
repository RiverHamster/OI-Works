#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int t,i,l;
char s[100005];
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		memset(s,0,sizeof(s));
		scanf("\n%s",s);
		l=strlen(s);
		for(i=0;i<l;i++){
			if(s[i]=='r')
				printf("%d ",i+1);
			}
		for(i=l+1;i>=0;i--){
			if(s[i]=='l')
				printf("%d ",i+1);
			}
		printf("\n");
		}
	return 0;
	}

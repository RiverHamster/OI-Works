#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<cstdlib>
#include<queue>
#define ll long long
const int inf=2147483647;
const int ine=-2147483647;
using namespace std;
int t,n,to;
char s[100005];
int main(){
    //freopen("number.in","r",stdin);
    //freopen("number.out","w",stdout);
	scanf("%d",&t);
	for(register int i=0;i<t;++i){
		scanf("%d\n%s",&to,s+1);
		int js=0,l=strlen(s+1),ans=0;
		for(register int j=1;j<=l;++j)
			js+=s[j]-'0';
		js=to-js;
		if(js<=0){
			printf("0\n");
			continue;
		}
		printf("%c\n",s[3]);
		for(register int j=1;j<=l;++j){
			++ans;
			if('9'-s[j]>=js)
				break;
			js-='9'-s[j];
		}
	    printf("%d\n",ans);
	}
	return 0;
}

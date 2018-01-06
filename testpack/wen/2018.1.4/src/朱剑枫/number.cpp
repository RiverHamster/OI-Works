#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
char s[1000001];
int kk,t,sum,k,l,a[1000001];
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d\n",&k);
		scanf("%s",s+1);
		l=strlen(s+1);
		sum=kk=0;
		for(int i=1;i<=l;i++) sum+=s[i]-'0',a[i]=s[i]-'0';
		if(sum>=k) printf("%d\n",0);
		else{
			sort(a+1,a+1+l);
			while(sum<k) sum+=9-a[++kk];
			printf("%d\n",kk);
		}
	}
}

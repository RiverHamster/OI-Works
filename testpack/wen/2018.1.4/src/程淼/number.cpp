#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t,k,a[100005];
char n[100005];
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		memset(a,0,sizeof(a));
		memset(n,0,sizeof(n));
		int sum=0;
		scanf ("%d",&k);
		scanf ("%s",n);
		int len=strlen(n);
		for (int i=0;i<len;i++){
			a[i+1]=n[i]-'0';
			sum+=a[i+1];
		}
		if (sum>=k){printf ("0\n");continue;}
		sort(a+1,a+len+1);
		for (int i=1;i<=len;i++){
			sum+=(9-a[i]);
			if (sum>=k){printf ("%d\n",i);break;}
		}
	}
	return 0;
}

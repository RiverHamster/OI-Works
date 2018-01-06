#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
char b[100005];
int main(){
	freopen("number.in","r",stdin);
	 freopen("number.out","w",stdout);
	int n,a;
	scanf("%d",&n);
	while(n--){
		int sum=0;
		int ans=0;
		scanf("%d %s",&a,b);
		int l1=strlen(b);
		for(int i=0;i<l1;i++)
		sum+=(b[i]-'0');
		if(sum>=a) {printf("0\n"); continue;}
		for(int i=0;i<l1;i++){
			sum=0;
			b[i]='9';
			for(int i=0;i<l1;i++)
			sum+=(b[i]-'0');
			ans++;
			if(sum>=a) {break;}
		}
	    printf("%d\n",ans);
	}
}
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int zs(int n){
    if(n==2) return 1;
    for(int i=2;i*i<=n;i++)
    if(n%i==0) return 0;
    return 1;
}
int main(){
   freopen("prime.in","r",stdin);
   freopen("prime.out","w",stdout);
    int n,a[10000],ans=0,c;
    scanf("%d",&n);
    for(int i=2,k=1;i<=10000;i++)
    if (zs(i)) {
	a[k]=i; k++;
	}
	while(n--){
	scanf("%d",&c);
	ans=0;
	for(int i=1;i<=1229;i++){
	if (a[i]>c) break;
	int  ans1=0;
	for(int k=i;k<=1229;k++){
	ans1+=a[k];
	if(ans1==c) ans++;
	if(ans1>c) break;
	}
}
printf("%d\n",ans);
}
}

   

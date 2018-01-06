#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int t,i,n,m,d,j;
int a[1000],s[10000],b[1000];
bool ok;
bool isp(int ss){
	for(i=2;i<=sqrt(ss);i++)
		if(ss%i==0)
			return false;
		return true;
	}
int main(){
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&m,&d);
		if(m-n+1<d)
			continue;
		for(i=1;i<=m-n+1;i++){
			b[i]=i+n-1;
			a[i]=i+n-1;
			}
		a[0]=0;
		ok=1;
		while(ok){
		next_permutation(a+1,a+1+m-n);
			bool f=0;
			s[0]=0;
		for(i=1;i<=m-n+1;i++)
			if(a[i]!=b[i]){
				f=1;
				s[i]=s[i-1]+a[i];
			}
			if(!f){
				printf("None\n");
				ok=0;
				break;
			    }
			f=1;
			for(j=2;j<=d&&f;j++)
				for(i=j;i<=m-n+1&&f;i++)
				if(isp(s[i]-s[i-j])){
				    f=0;
					for(int k=1;k<=d;k++)
						break;
			}
			for(i=1;i<=m-n+1;i++)
			printf("%d ",a[i]);
		printf("\n");
	    break;
	}
}
	return 0;
}

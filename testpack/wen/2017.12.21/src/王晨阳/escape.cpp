#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	char a[400000];
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		int n=strlen(a);
		for(int i=0;i<n;i++)
			if(a[i]=='r') printf("%d ",i+1);
		for(int i=n-1;i>=0;i--)
			if(a[i]=='l')printf("%d ",i+1);
		printf("\n");
	}
}
		
		
		
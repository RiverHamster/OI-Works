#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
char l[100005];
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int t;
	scanf("%d\n",&t);
	char x;
	while(t--){
		int k=1;
		scanf("%c",&x);
		while(x!='\n'){
			l[k]=x;
			k++;
			scanf("%c",&x);
		}
		k--;
		for(int i=1;i<=k;i++){
			if(l[i]=='r') printf("%d ",i);
		}
		for(int i=k;i>=1;i--){
			if(l[i]=='l') printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

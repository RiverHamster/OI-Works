#include<cstdio>
#include<iostream>
char a[100005];

using namespace std;

int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int n,j;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a;
		for(j=0;a[j]!='\0';j++){
			if(a[j]=='r') printf("%d ",j+1);
		}
		for(int k=j;k>=0;k--){              
			if(a[k]=='l') printf("%d ",k+1);
		}
		printf("\n");
		
	}
	
	return 0;
}
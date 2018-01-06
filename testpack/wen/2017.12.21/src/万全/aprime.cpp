#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
bool v[1005];
int t,n,m,d,a[1005],he[1005];bool ok;
void print(){
	for(int j=1;j<=20;j++)
		printf("%d ",&a[j]);
	printf("\n");
}
bool pd(int d,int n){
    for(int i=2;i<=d;i++){
		for(int j=2;j<=sqrt(he[n]-he[n-i]);j++){
			if((he[n]-he[n-i])%j==0){return 0;}
		}
	}
	return 1;
}
void search(int n,int m,int d){
    int i;
    for (i=n;i<=m;i++){
		if (pd(d,i)&&(!v[i])){
		a[n]=i;
		v[i]=1;
		he[i]=he[i-1]+i;
		if (n==m+1){if(pd(d,i)){print();ok=1;}}
		else search(n+1,m,d);
		v[i]=0;
		he[i]=he[i]-i;
		}
		else return;
	}
}        
int main(){
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	scanf("%d",&t);
	while(t--){ok=0;
		scanf("%d%d%d",&n,&m,&d);
		search(n,m,d);
		printf("None\n");
	}         
}

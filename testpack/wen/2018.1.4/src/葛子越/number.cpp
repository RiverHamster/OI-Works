#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define Int(a) scanf("%d",&a)
#define open(a,b) freopen(a,"r",stdin),freopen(b,"w",stdout)
int a[100005];
string s;
int main(){
	open("number.in","number.out");
	int t,k,n,sum,i;
	Int(t);
	while(t--){
		Int(k);
		cin>>s;
		sum=0;
		n=s.size();
		for(i=0;i<n;i++){
			a[i+1]=s[i]-'0';
			sum+=a[i+1];
		}
		if(sum>=k){
			printf("0\n");
			continue;
		}
		sort(a+1,a+n+1);
		for(i=1;i<=n;i++){
			sum+=(9-a[i]);
			if(sum>=k){
				break;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}


#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
bool p[10002];
int t,n;
void zs(){
	memset(p,0,sizeof(p));
	for(int i=2;i<=10000;i++){
		if(!p[i]){
			for(int j=i*2;j<=10000;j+=i)
				p[j]=1;
		}
	}
	return ;
}
ll work(int a){
    ll ans=0;
	int s=0;
	for(int i=2;i<=a;i++){
		if(!p[i]){
			for(int j=i;j<=a;j++){
				if(!p[j]){
			        s+=j;
				}
			    if(s>a){
					s=0;
					break;
				}
				if(s==a){
		            s=0;
					ans++;
					break;
				}
			}
		}
	}
	return ans;
}
int main(){
    freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	zs();
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		cout<<work(n)<<endl;
	}
	return 0;
}

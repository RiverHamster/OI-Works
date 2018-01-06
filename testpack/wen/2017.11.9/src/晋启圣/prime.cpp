#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int a[1250],t,n,ans;
bool isp(int n){
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return 0;
	return 1;
}
void work1(){
	int n=1;
	a[1]=2;
	for(int i=3;i<=10000;i+=2)
		if(isp(i))
			a[++n]=i;
}
void work2(){
	int s;
	for(int i=1;a[i]<n;i++){
		s=0;
		for(int j=i;a[j]<n;j++){
			s+=a[j];
			if(s==n){
				ans++;
				break;
			}
		}
	}
}
int main(){
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);
    
	work1();
	cin>>t;
	while(t--){
		ans=0;
		cin>>n;
		if(isp(n))
			ans++;
		work2();
		cout<<ans<<endl;
	}
    return 0;
}

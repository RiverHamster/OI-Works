#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
ll a[33],t,tmp,s,sum;
ll x,xx;
int main(){
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	cin>>t;
	while(t--){
		cin>>x;
		if((x&(x-1))==0)cout<<1<<' '<<x*2-1<<endl;
		else if(x%2==1)cout<<x<<' '<<x<<endl;
		else{
			xx=x,s=0;
			while(xx) a[++s]=xx%2,xx/=2;
			int i;
			for(i=1;a[i]==0;i++);
			a[i]=0;
			a[1]=1;
			sum=0;
			tmp=1;
			for(int i=1;i<=s;i++){
				if(a[i]==1) sum+=tmp;
				tmp*=2;
			}
			cout<<sum<<' '<<x*2-sum<<endl;
		}
	}
}

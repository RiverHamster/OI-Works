#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
char c,a[1000001];
struct p{
	double data;
	int k;
}q[1000001];
int t,s;
double l,r,mid;
bool cmp(p i,p j){
	return i.data<j.data;
}
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	cin>>t;
	while(t--){
		s=0;
		c=getchar();
		while(c!='l'&&c!='r') c=getchar();
		while(c=='l'||c=='r'){
			a[++s]=c;
			c=getchar();
		}
		l=0;
		r=1;
		mid=0.5;
		for(int i=1;i<=s;i++){
			q[i].k=i;
			q[i].data=mid;
			if(a[i]=='l'){
				r=mid;
				mid=(l+r)/2;
			}
			else{
				l=mid;
				mid=(l+r)/2;
			}
		}
		sort(q+1,q+1+s,cmp);
		for(int i=1;i<=s;i++) printf("%d ",q[i].k);
		printf("\n");
	}
}

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct p{
	int x,y;
}a[10001];
bool cmp(p i,p j){
	return i.x<j.x;
}
int t,sum,k[10001],j,minn,l;
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	scanf("%d",&t);
	bool ok=0;
	for(int i=1;i<=t;i++)
	cin>>a[i].x>>a[i].y;
	sort(a+1,a+1+t,cmp);
	for(int i=1;i<=t;i++){
		ok=0;
		minn=1000001;
		for(j=1;j<=sum;j++)
		if(k[j]<=a[i].x&&k[j]<=minn){
			ok=1;
			minn=k[j];
			l=j;
		}
		if(ok) k[l]=a[i].y;
		else{
			k[++sum]=a[i].y;
		}	
	}
	cout<<sum;
}

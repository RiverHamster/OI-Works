#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
struct ES{
	int id;
	long double p;
}a[100005];
char c[100005];
bool cmp(ES x,ES y){
	if(x.p==y.p)
		return x.id<y.id;
	return x.p<y.p;
}
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		double r=1,l=0;
		scanf("%s",c);
		n=strlen(c);
		for(int i=0;i<n;i++){
			a[i].id=i+1;
			a[i].p=1.0*(r+l)/2;
			if(c[i]=='l') r=a[i].p;
			else l=a[i].p;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++)
			printf("%d ",a[i].id);
		printf("\n");
	}
	return 0;
}

#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int t,k,l;
char n[100005];
bool cmp(char x,char y){
	return (int)x<(int)y;
}
int f (){
	int sum=0;
	for (int i=0;i<l;i++)
		sum+=n[i]-'0';
	return sum;
}
int main (){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	scanf("%d",&t);
	while (t--){
		memset(n,0,sizeof(n));
		scanf("%d%s",&k,n);
		l=strlen(n);
		if (f()>=k){printf("0\n");continue;}
		else {
			sort(n,n+l,cmp);
			int s=k-f(),ans=0;
			for (int i=0;i<l;i++){
				s-=(9-n[i]+'0'),ans++;
				if (s<=0)break;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}

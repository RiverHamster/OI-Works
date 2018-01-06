#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
bool cmp(char x,char y){
	return x-'0'<y-'0';
}
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int k;
		char a[100005];
		long long s=0,s1=0;
		scanf("%d %s",&k,a);
		int len=strlen(a);
		for(int i=0;i<len;i++){
			s+=a[i]-'0';
		}
		if(s>=k){printf("0\n");continue;}
		//int w=k-s;
		sort(a,a+len,cmp);
		for(int i=0;i<len;i++){
			if(s-(a[i]-'0')+9>=k){s1++;break;}
			else {s1++;s+=9-(a[i]-'0');}
		}
		printf("%lld\n",s1);
	}
	return 0;
}

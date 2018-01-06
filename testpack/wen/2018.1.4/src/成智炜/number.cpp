//·ÀÎ±Ë®Ó¡ 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
char l[100005];
int a[15]={0};
int in(){
	char x;
	int k=1;
	while((x=getchar())!='\n'){
		l[k]=x;
		k++;
	}
	k--;
	return k;
}
bool cmp(char x,char y){
	return (x-'0')<(y-'0');
}
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t,k;
	scanf("%d",&t);
	while(t--){
		int ans=0;bool p=1;
		scanf("%d\n",&k);
		int len;
		len=in();
		int s=0;
		for(int i=1;i<=len;i++){
			s+=l[i]-'0';
			a[l[i]-'0']++;
			if(s>=k){
				printf("0\n");
				p=0;
				break;
			}
		}
		if(p){
			sort(l+1,l+1+len,cmp);
			for(int i=1;i<=len;i++){
				s+=9-(l[i]-'0');
				ans++;
				if(s>=k){
					printf("%d\n",ans);
					break;
				}
			}
		}
	}
	return 0;
}
//·ÀÎ±Ë®Ó¡ 

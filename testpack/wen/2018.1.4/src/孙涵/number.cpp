#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int a,i,s2,ans;
char b[100050];
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t,sum;
	scanf("%d",&t);
	while(t--){
		ans=sum=0;
		scanf("%d",&a);
		scanf("%s",b);
		s2=strlen(b);
		for(i=0;i<s2;i++)
			sum+=b[i]-'0';
		if(sum>=a)
			printf("0\n");
		else{
			sort(b,b+s2);
			for(i=0;i<s2;i++)
				if(b[i]<='9'){
					sum+=9-(b[i]-'0');
					ans++;
					if(sum>=a){
				       printf("%d\n",ans);
				       break;
					     }
					}
			}
		}
	return 0;
	}

#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
char s[200005];
inline bool chrcmp(char a,char b){
    return a>b;
}
int main(){
    freopen("number.in","r",stdin);
    freopen("number.out","w",stdout);
	int DataC,n,len,i,sum=0;
    scanf("%d",&DataC);
	while(DataC--){
		scanf("%d\n%s",&n,s);
		len=strlen(s);
		sum=0;
		for(i=0;i<len;i++) sum+=s[i]-'0';
		sum-=n;
		//printf("%d\n",sum);
		sort(s,s+len,chrcmp);
		for(i=0;i<len;i++){
			if(sum>=0) break;
			sum+='9'-s[i];
		}
		printf("%d\n",i);
    }
    return 0;
}

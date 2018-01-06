#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int t,k;
char n[100005];
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	scanf("%d", &t);
	while(t--){
		scanf("%d", &k);
	    scanf("%s", n);
	    int len=strlen(n),sum=0,ans=0;
	    for(int i=0; i<len; i++)
	        sum+=(n[i]-'0');
	    if(sum>=k) printf("0\n");
	    else{
	    	sort(n,n+len);
	    	for(int i=0; i<len; i++){
	    		if(n[i]<='9'){
	    			sum+=9-(n[i]-'0');
	    			ans++;
	    			if(sum>=k){printf("%d\n", ans); break;}
	    		}
	    	}
	    }
	}
	return 0;
}

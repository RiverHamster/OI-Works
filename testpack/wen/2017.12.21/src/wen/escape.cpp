#include <cstdio>
#include <cstring>
const int N=100005;
char s[N];
int ans[N];
int main(){
	freopen("escape.in", "r", stdin);
	freopen("escape.out", "w", stdout);
	int t;
	scanf("%d", &t);
    while(t--){
		scanf("%s", s);
		int n=strlen(s), l=0, r=n-1;
	    for (int i=0; i<n; i++){
	        if (s[i]=='l')
        		ans[r--]=i+1;
	        else
     	        ans[l++]=i+1;
    	}
    	for (int i=0; i<n; i++)
	        printf("%d ", ans[i]);
	    printf("\n");
	}
    return 0;  
}  

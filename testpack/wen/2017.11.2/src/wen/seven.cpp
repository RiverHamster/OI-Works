#include <cstdio>
int main(){
    freopen("seven.in","r",stdin);
    freopen("seven.out","w",stdout);
    int t, n;
    scanf("%d", &t);
    while (t--){
	    scanf("%d", &n);
    	int x=7, y=7, now=7;
    	while (n--)
        	if (x==y)
           		now=x, x+=7, y+=10;
        	else if (x<y)
           		now=x, x+=7;      
        	else 
           		now=y, y+=10;  
    	printf("%d\n", now);
	}
    return 0;
}

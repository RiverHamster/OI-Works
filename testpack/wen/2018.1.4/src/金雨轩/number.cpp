#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int n,g,s=0,t;
	char a[10001];
	int len;
	scanf("%d",&n);
	while(n--){
		memset(a,0,sizeof(a));
		s=0;
		t=0;
		scanf("%d ",&g);
		scanf("%s",a);
		len=strlen(a);
		sort(a,a+len);
		for(int i=0;i<len;i++) {
			a[i]-='0';
		    t+=a[i];
		}
		if(t>=g) printf("0\n");
		else{
			for(int i=0;i<len;i++)
			    if(a[i]<=9){
			    	t+=9-a[i]; 
			    	s++;
				if(t>=g){
					printf("%d\n",s);
					break;
				}
			}
		}
	}
	return 0;
}


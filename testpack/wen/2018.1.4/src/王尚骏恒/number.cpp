#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int t,k,i,l,s,ans,a[100005];
char n[100005];
int read(){
    int a=0;
    char c=getchar();
    while(c<'0'||c>'9') c=getchar();
    a=c-'0';c=getchar();
    while(c>='0'&&c<='9'){
        a=a*10+c-'0';
        c=getchar();
    }
    return a;
}
int main()
{
    freopen("number.in","r",stdin);
    freopen("number.out","w",stdout);
    t=read();
	while(t--){
		k=read();
		cin>>n+1;
		l=strlen(n+1);
		s=0;ans=0;
		for(i=1;i<=l;i++){
			s+=n[i]-'0';
			a[i]=n[i]-'0';
		}
		sort(a+1,a+l+1);
		for(i=1;s<k&&i<=l;i++)
			if(s+9-a[i]<k){
				s+=9-a[i];
				ans++;
			}
			else{
				ans++;
				break;
			}
		printf("%d\n",ans);
	}
    return 0;
}


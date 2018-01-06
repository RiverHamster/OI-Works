#include <cstdio>
#include <iostream>
using namespace std;
int t,k,a,i,s;
int read(){
    int a;
    char c=getchar();
    while(c<'0'&&c>'9') c=getchar();
    a=c-'0';c=getchar();
    while(c>='0'&&c<='9'){
        a=a*10+c-'0';
        c=getchar();
    }
    return a;
}
int main()
{
    freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
    t=read();
    while(t--){
        k=read();s=1;
        for(i=1;i<=k;i++){
            a=read();
            s=s+a-1;
        }
        printf("%d\n",s);
    }
    return 0;
}


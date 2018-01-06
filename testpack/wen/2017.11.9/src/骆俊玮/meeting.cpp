#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct meet{
    int ks,js;
}a[1005];
int main()
{
    freopen("meeting.in","r",stdin);
    freopen("meeting.out","w",stdout);
    int i,j,k,n,s,minn=2147483647;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d%d",&a[i].ks,&a[i].js);
    //sort()
    for(i=0;i<n;i++){
        s=1;
        for(j=i,k=i;j<n;j++){
            if(a[k].ks<a[j].js) s++;
            else k=j;
        }
        if(s<minn) minn=s;
    }
    printf("%d\n",minn);
    return 0;
}

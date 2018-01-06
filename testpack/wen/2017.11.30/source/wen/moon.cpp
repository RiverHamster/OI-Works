#include <cstdio>
const int Md=10007, N=5005;
int a[N];
int main(){
    freopen("moon.in","r",stdin);
    freopen("moon.out","w",stdout);
    a[0]=0; a[1]=1;
    int x=1;
    for (int i=2; i<=5000; i++){
        a[i]=(2*a[i-1]+x)%Md;
        x=x*2%Md;
    }//µÝÍÆ¹«Ê½
    int n, t;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        printf("%d\n", a[n]);  
    }  
    return 0;
}


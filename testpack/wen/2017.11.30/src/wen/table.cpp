#include <cstdio>
int main(){
    freopen("table.in","r",stdin);
    freopen("table.out","w",stdout);
    int n, mmax, id;
    scanf("%d", &n);
    mmax=0; id=-1;
    for (int i=0; i<n; i++){
        int t=0, y;
        for (int j=0; j<n; j++){
            scanf("%d", &y);
            t+=y;
        }
        if (t>mmax) { mmax=t; id=i;}
    }
    printf("%d\n", id+1);
    return 0;            
}

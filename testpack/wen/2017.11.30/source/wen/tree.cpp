#include <cstdio>
#include <algorithm>
using namespace std;
const int S=1000005;
int tr[S];
int main(){
    freopen("tree.in", "r", stdin);
    freopen("tree.out", "w", stdout);
    int L, n, all=0;
    scanf("%d %d", &L, &n);
    for (int i=0; i<n; i++){
        int x, d, k;
        scanf("%d %d %d", &x, &d, &k);
        for (int j=0; j<k; j++)
            tr[all++]=x+j*d;
    }
    /*for (int i=0; i<all; i++)
        printf("%d ", tr[i]);
    printf("\n");*/
    sort(tr, tr+all);
    /*for (int i=0; i<all; i++)
        printf("%d ", tr[i]);
    printf("\n");*/
    int ans=1<<30, x=tr[0];
    for (int i=1; i<all; i++){
        if (ans>tr[i]-x)
            ans=tr[i]-x;
        if (ans==0){ //printf("%d %d %d\n", tr[i], x, i);
            break;}
        x=tr[i];
    }
    printf("%d\n", ans);
    return 0;
}

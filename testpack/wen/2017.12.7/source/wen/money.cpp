#include <cstdio>
const int M=1030010;
int b[M]={0};
int main(){
    freopen("money.in", "r", stdin);
    freopen("money.out", "w", stdout);
    int n, x;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &x);
        b[x]++;
    }//桶排序，然后贪心求解 
    int ans=0, now=-1;
    for (x=1; x<=1000000; x++){
        if (b[x]>=1)
            if (x>=now){
                ans+=(b[x]-1)*b[x]/2;
                now=x+b[x];
            }
            else {
                ans+=(now+now+b[x]-1)*b[x]/2-x*b[x];
                now+=b[x];
            }
    }
    
    printf("%d\n", ans);
    return 0;
}
//1 2 3 4 4 5 6
//  9  9  9  9 10 10 11 11 11 11 14 14 14 
//  9 10 11 12 13 14 15 16 17 18 19 20 21 
//  9(4) 10(2) 11(4) 14(3)
//  9 10 11 12 
//  now=13  x=10
//

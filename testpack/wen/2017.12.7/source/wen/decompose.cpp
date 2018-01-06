#include <iostream>
using namespace std;
typedef long long ll;
const int M=401;
ll s[M][M];

int main(){
    int n, t;
    ll a[M];
    freopen("decompose.in","r",stdin);
    freopen("decompose.out","w",stdout);
    for (int i=0; i<M; i++) 
        s[i][1]=s[1][i]=s[i][0]=s[0][i]=1;
    for (int i=2; i<M; i++)
        for (int j=2; j<M; j++)
            if (j<i)
                s[i][j]=s[i-j][j]+s[i][j-1];
            else if (j==i)
                s[i][j]=s[i][i-1]+1;
            else 
                s[i][j]=s[i][i];
    for (int i=1; i<M; i++){
        a[i]=1;
        for (int k=i-2; k>0; k-=2)
            a[i]+=s[(i-k)/2][k];
        if (i%2==0)
            a[i]+=s[i/2][i/2];
    }
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        cout<<a[n]<<endl;  
    }
    return 0;
}

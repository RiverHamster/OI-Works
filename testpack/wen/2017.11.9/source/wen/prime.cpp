#include <cstdio>
const int M=10101;
bool np[M];
int p[1300], sum[1300], ans[M], n;
void pr(){//ɸ����10000���ڵ�����
    int ps=0;
    for (int i=2; i<M; i++) //��ͨɸ�� 
        if (!np[i]){
            p[ps++]=i;
            for (int j=i*i; j<M; j+=i)
                np[j]=1;
        }
    sum[0]=0;//������ 
    for (int i=1; i<=ps; i++)
        sum[i]=sum[i-1]+p[i-1]; //ǰ���ɸ����������ĺ� 
        //p[0]=2   p[1]=3   p[2]=5  p[3]=7  ... 
        //sum[1]=2  sum[2]=5  sum[3]=8  sum[4]=15
    for (int i=0; i<ps; i++)
        for (int j=i+1; j<ps; j++)
            if (sum[j]-sum[i]<M) 
                ans[sum[j]-sum[i]]++;
        //��Ͱ������ 
        //sum[j]-sum[i]��ʾ�ӵ�i�������ӵ���j�������ĺ� 
}
int main(){
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);
    int t, n;
    scanf("%d", &t);
    pr();
    while (t--){
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}

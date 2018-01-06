#include <cstdio>
int dif(int a, int b){//�ҳ�a��b�Ĳ�ͬ���ָ���
    int x=0;
    while (a!=0 || b!=0){
        if (a%10!=b%10) x++;
        a/=10; b/=10;
    }
    return x;
}
inline int mn(int a, int b){
    return a>b ? b : a;
}
int main(){
    freopen("change.in","r",stdin);
    freopen("change.out","w",stdout);
    int t;
    scanf("%d", &t);
    while (t--){
        int n, s=1;
        scanf("%d", &n);
        for (int m=n; m>0; m/=10) 
            s*=10;//�ҳ���n������С��ͬλ������m-1 
        int ans=20;  //��Сֵ�ĳ�ֵ 
        for (int i=0; i*i<s; i++)
	      ans=mn(ans, dif(n, i*i));
        printf("%d\n", ans);
    }
    return 0;
}
/*
n=1023ʱ���ĳ�  1024 
n=13025ʱ��ֻҪ�Ѹ�λ��1ɾ�����ɣ�  -->  3025 
n=2000000ʱ��ֻҪ�Ѹ�λ��2ɾ������   --> 0
����n��λ����������λ��Ϊ5�� 
���ж����е�1��2��3��4��5λ��ƽ������
��������x�Ĳ��� 
*/

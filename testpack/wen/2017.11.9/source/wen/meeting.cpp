#include <cstdio>
#include <algorithm>
using namespace std;
struct Meet{ 
    int atime;//ʱ��� 
    int bemark;//��ֹ���,0��ʾ�����㣬1��ʾ��ʼ�� 
} a[2005];
bool cmp(Meet p, Meet q){
    if (p.atime == q.atime) 
       return p.bemark < q.bemark;
    return p.atime < q.atime;
}//����ʱ����ʱ����Ⱥ���У�ʱ�����ͬ�ģ����������� 

int main(){
    freopen("meeting.in","r",stdin);
    freopen("meeting.out","w",stdout);
    int t, tb, te;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        scanf("%d %d", &tb, &te);
        a[i*2].atime=tb;
        a[i*2].bemark=1;
        a[i*2+1].atime=te;
        a[i*2+1].bemark=0;
    }//�����л���Ŀ�ʼ�ͽ���ʱ������������ 
    sort(a, a+t*2, cmp);
    int ans=0, cur=0;
    for (int i=0; i<2*t; i++){
        if (a[i].bemark==1) cur++;//���п�ʼ����ջ 
        else cur--;//�������ջ 
        if (cur>ans) ans=cur;//��ջ�������� 
    }
    printf("%d\n", ans);
    return 0;
}

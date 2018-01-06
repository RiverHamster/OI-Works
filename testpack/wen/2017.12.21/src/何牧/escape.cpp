#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int t,k[100005];
char s[100005];

int main()
{
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
    cin>>t;
    while(t--)
    {
        scanf("%s",s);
        int len=strlen(s),z1=0,z2=len-1;
        for(int i=0;i<len;i++)
        {
            switch(s[i])
            {
                case 'l':{
                     k[z2--]=(i+1);
                     break;
                }
                case 'r':{
                     k[z1++]=(i+1);
                     break;
                }
            }
        }
        for(int i=0;i<len;i++)
            cout<<k[i]<<' ';
        cout<<endl;
    }
    return 0;
}

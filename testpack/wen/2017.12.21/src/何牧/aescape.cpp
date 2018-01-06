#include<cstdio>
#include<cmath>
#include<ctime>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    //freopen("aescape.in","r",stdin);
    freopen("aescape.out","w",stdout);
    srand(time(NULL));
    int t=rand()%5+1;
    cout<<t<<endl;
    while(t--)
    {
        int len=rand()%10+10;
        while(len--)
        {
            int k=rand()%2;
            if(k)
                printf("l");
            else
                printf("r");
        }
        cout<<endl;
    }
    return 0;
}

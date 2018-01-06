#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
#define NextInt(a) scanf("%d",&a)
#define NextChar(a) scanf("%c",&a)
#define NextString(a) cin>>a
#define PrintInt(a) printf("%d",a)
#define PrintspInt(a) printf("%d ",a)
#define PrintlnInt(a) printf("%d\n",a)
int main(){
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
    int t,n,i;
    string s;
    NextInt(t);
    while(t--){
        NextString(s);
        n=s.size();
        for(i=0;i<n;i++){
            if(s[i]=='r'){
                PrintspInt(i+1);
            }
        }
        for(i=n-1;i>=0;i--){
            if(s[i]=='l'){
                PrintspInt(i+1);
            }
        }
        printf("\n");
    }
    return 0;
}

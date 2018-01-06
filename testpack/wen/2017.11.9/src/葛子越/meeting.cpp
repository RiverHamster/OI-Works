#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<fstream>
using namespace std;
ifstream in("meeting.in");
ofstream out("meeting.out");
int t[10005];
bool cmp(int i,int j);
void read(int &a);
int main(){
    int n,i,now=0,ans=0,a,b,maxi;
    read(n);
    for(i=1;i<=n;i++){
        read(a);
        t[a]++;
        read(b);
        t[b]--;
        maxi=max(maxi,b);
    }
    for(i=1;i<=maxi;i++){
        now+=t[i];
        ans=max(ans,now);
    }
    out<<ans<<endl;
    in.close();
    out.close();
    return 0;
}
void read(int &a){
    int k=0;
    bool flag=0;
    char s;
    while(1){
        s=in.get();
        if(s=='-'){
            flag=1;
        }
        if(s>='0'&&s<='9'){
            k=s-'0';
            break;
        }
    }
    while(1){
        s=in.get();
        if(s<'0'||s>'9'){
            break;
        }
        k=(k<<1)+(k<<3)+s-'0';
    }
    if(flag){
        a=-k;
    }else{
        a=k;
    }
}

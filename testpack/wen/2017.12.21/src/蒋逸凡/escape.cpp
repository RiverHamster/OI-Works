#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<map>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define m(a) memset(a,0,sizeof(a))
struct stone{
	int id;
	int fz,fm;
}st[100005];
inline int abs(int a){
	return a>0?a:-a;
}
inline int gcd(int a,int b){
	if(abs(a)%abs(b)==0) return abs(b);
	return abs(gcd(b,a%b));
}
inline bool cmp(stone a,stone b){
	if(a.fz*b.fm==b.fz*a.fm) return a.id<b.id; 
	return a.fz*b.fm<b.fz*a.fm;
}
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int t;
	string s;
	cin>>t;
	while(t--){
		int l,x=0,y=1;
		cin>>s;
		l=s.length();
		for(int i=0;i<l;i++){
			st[i+1].id=i+1;
		    int z=x+y,m=2,g;
			g=gcd(z,m);
			z/=g;
			m/=g;
			st[1+i].fz=z;
			st[1+i].fm=m;
			if(s[i]=='l')
				x-=1000;
			if(s[i]=='r')
				y+=1000;
		}
		sort(st+1,st+1+l,cmp);
		for(int i=1;i<=l;i++)
			printf("%d ",st[i].id);
		printf("\n");
	}
	return 0;
}

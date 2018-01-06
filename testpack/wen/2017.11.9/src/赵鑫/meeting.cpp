#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int n,begin[1101],end[1101];
void init()
{
  cin>>n;
  for(int i=1;i<=n;i++) 
    cin>>begin[i]>>end[i];
}
void qsort(int x,int y)
{ 
  int i,j,mid,t;
  i=x;j=y;mid=end[(x+y)/2];
  while(i<=j)
   { 
     while(end[i]<mid) ++i;
     while(end[j]>mid) --j;
     if(i<=j)
      { 
        t=end[j];end[j]=end[i];end[i]=t;
        t=begin[j];begin[j]=begin[i];begin[i]=t;
        ++i;j; 
      }
   }
  if(x<j) qsort(x,j);
  if(i<y) qsort(i,y);
}

void solve()
{ 
  int ans=0;
  for(int i=1,t=-1;i<=n;++i)         
   if(begin[i]>=t) {++ans;t=end[i];}
  cout<<ans<<endl;
}
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
  init();
  qsort(1,n);
  solve();
  return 0;
}

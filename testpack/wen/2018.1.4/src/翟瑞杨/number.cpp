#include <cstdio>
const int N=100005;
char s[N];
int main(){
	freopen("number.in", "r", stdin);
	freopen("number.out", "w", stdout);
	int t, k;
	scanf("%d", &t);
	while (t--){ 
		scanf("%d %s", &k, s);
		int b[10]={0}, sum=0;
		for (int i=0; s[i]; i++){
			b[s[i]-'0']++;
			sum+=s[i]-'0';
		}//先统计所有数字出现次数,并累加所有数字和 
		int res=k-sum, ans=0; 
		for (int i=0; res>0 && i<9; ){
			if (b[i]>0) //把每个数字修改成9，凑齐差值即可 
				res-=9-i, b[i]--, ans++;
			else 
				i++;
		}		
		printf("%d\n", ans);
	}
	return 0;
} 


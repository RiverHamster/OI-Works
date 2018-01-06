#include <cstdio>

int main(){
    freopen("isbn.in","r",stdin);
    freopen("isbn.out","w",stdout);
    int t;  char s[15];
    scanf("%d\n", &t);
    while (t--){
        scanf("%s", s);        
        int x, sum=0, k=-1;
        for (int i=0; i<9; i++){
            if (s[i]=='?') k=i;
            else sum+=(10-i)*(s[i]-'0');  
        }
        if (s[9]=='?')
            k=9;
        else if (s[9]=='X')
            sum+=10;
        else 
            sum+=s[9]-'0';
        //确定？在的位置及目前的sum    
        for (x=0; x<=10; x++) //穷举x的可能值
            if ((sum+x*(10-k))%11==0){
        		if (x<10) 
		        	printf("%d\n", x);
        		else if (x==10 && k==9)
		        	printf("X\n");
		        else printf("-1\n");
				break;
            }   
    }
    return 0;
}

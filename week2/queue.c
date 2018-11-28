#include<stdio.h>
int main(){
    int i,j,n,m,tp=-1;
    int md=1000005;
    int ar[1000005];
    char ch;
    int frnt=0,end=0;
    
    
    #ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
    scanf("%d",&n);
    
    while(n--){
     
     scanf("%c",&ch);
     while(ch!='-' && ch!='+'){
         scanf("%c",&ch);
     }
     if(ch=='+'){
        scanf("%d",&ar[end]);
        end=(end+1)%md;
     }else{
        printf("%d\n",ar[frnt]);
        frnt = (frnt+1)%md;
     }
     
    }
    return 0;
}
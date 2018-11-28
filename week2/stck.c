#include<stdio.h>
int main(){
    int i,j,n,m,tp=-1;
    int ar[1000005];
    char ch;
    
    
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
         tp+=1;
        scanf("%d",&ar[tp]);
     }else{
        printf("%d\n",ar[tp]);
        tp--;
     }
     
    }
    return 0;
}
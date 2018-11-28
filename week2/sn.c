#include<stdio.h>
#define mx 100005
typedef struct stacks{

    int ar[mx];
    int top;

} stack;

int pops(stack* st1){
    st1->top -=1;
    if (st1->top <0){
        return -1;
    }
    return st1->ar[st1->top]; 
}

void pushs(stack* st1,int m){
    st1->ar[st1->top] = m;
    st1->top +=1;
}

int main(){
    int i,j,n,m,tp=-1,ans=0;
    
    int ar[mx];
    ar[0]=0;
    
    #ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
    scanf("%d",&n);
    int cnt=1;
    while(n--){
        scanf("%d %d",&i,&j);
        ar[cnt] = ar[i] + j;
        ans += ar[cnt];
        printf("%d %d\n",ans,ar[cnt]);
        cnt+=1;
        // printf("%d %d\n",ans,ar[cnt]);
    }
    printf("%d\n",ans);
    return 0;
}
#include<stdio.h>
#define mx 1900006
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
    int i,j,n,m,tp=-1;
    
    char ch,pop;
    char st[mx];
    stack stk1;
    stk1.top=0;
    
    #ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
    scanf("%d",&n);
    
    while(n--){
     scanf("%c",&ch);
     while(  ch==' ' || ch=='\n'){
         scanf("%c",&ch);
     }
    //  printf("%c %d %d\n",ch,stk1.top,stk1.ar[stk1.top-1]);
     int tmp;
     switch(ch){
         case '+': tmp = pops(&stk1) + pops(&stk1);
                    pushs(&stk1, tmp);
                    break;
         case '-': tmp =  (pops(&stk1) - pops(&stk1));
                    pushs(&stk1, -1*tmp);
                    break;
         case '*': pushs(&stk1, pops(&stk1) * pops(&stk1));
                    break;
         
         default: pushs(&stk1,(int)(ch-'0'));
         
     }
    }
    printf("%d\n",pops(&stk1));
    return 0;
}
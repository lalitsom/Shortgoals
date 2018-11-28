#include<stdio.h>
#define mx 100005
typedef struct stacks{

    char ar[mx];
    int top;

} stack;

char pops(stack* st1){
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
     
     scanf("%s",st);
     int i=0;
     stk1.top=0;
     while(st[i]!='\0'){
        if( (st[i]==')' || st[i]==']') && stk1.top==0 ){
            stk1.top=5;
            break;
        }

        if(st[i]=='(' || st[i]=='['){
            pushs(&stk1,st[i]);
        }
        else{
            if(st[i] == ')'){
                pop = pops(&stk1);
                if(pop!='('){
                    stk1.top=5;
                    break;
                }
            }
            if(st[i] == ']'){
                pop = pops(&stk1);
                if(pop!='['){
                    stk1.top=5;
                    break;
                }
            }
        }   
        i+=1;
     }
     if(stk1.top==0){
        printf("YES\n");
     }else{
        printf("NO\n");
     }
     
    }
    return 0;
}
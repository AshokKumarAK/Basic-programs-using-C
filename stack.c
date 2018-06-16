#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void tra();
int top=-1,stack[10];
void main(){
    int top=-1,stack[10],c;
    char ch;
    do{
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.TRANSVERSE\n");
        printf("Enter your choice:\n");
        scanf("%d",&c);
        switch(c){
            case 1: {push();break;}
            case 2: {pop();break;}
            case 3: {tra();break;}
        }
        printf("Enter Y/N");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y');
}
void push(){
    int tem;
    if(top ==9){
        printf("The stack is full");
        exit(0);
    }
    else{
        printf("Enter the element to insert:");
        scanf("%d",&tem);
        top++;
        stack[top]=tem;
    }
}
void pop(){
    int tem;
    if(top==-1){
        printf("The stack is empty");
        exit(0);
    }
    else{
        tem=stack[top];
        top-=1;
        printf("The element to pop is %d",tem);
    }
}
void tra(){
    int i;
    if(top==-1){
        printf("The stack is empty");
        exit(0);
    }
    else{
        for(i=top;i>=0;i--)
            printf("%d",stack[i]);
    }
}

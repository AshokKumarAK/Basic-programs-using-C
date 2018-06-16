#include<stdio.h>
void main(){
    int num;
    printf("2 3 5 7 ");
    for(num=11;num<=100000;num+=2){
        if(num%6==1 || num%6==5){
            if(num%2==0|| num%3==0 || num%5==0 || num%7==0){
                continue;
            }
            else{
                printf("%d ",num);
            }
        }
    }
}

#include<stdio.h>
void main(){
    int num=124,end,ctr;
    end=num/2;
    for(ctr=2;ctr<=end;ctr++){
        if (num%ctr==0){
            printf("%d ",ctr);
        }
    }
}

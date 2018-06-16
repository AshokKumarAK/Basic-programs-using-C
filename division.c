#include<stdio.h>
void main(){
    int ddent=33,div=32,ctr,quo;
    ctr=2;
    quo=0;
    while(ddent>=div){
        ddent-=div;
        quo++;
    }
    printf("%d %d",quo,ddent);
}

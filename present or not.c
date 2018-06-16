#include<stdio.h>
void main(){
    int num=12345,find=345,pow,len,flen,ctr,it,ct,dig,dig1;
    len=0;
    pow=1;
    while(num/pow){
        len++;
        pow*=10;
    }
    pow=1;
    flen=0;
    while(find/pow){
        flen++;
        pow*=10;
    }
    ctr=0;
    for(it=1,pow=1;it<len;it++)
        pow*=10;
    while(ctr!=len){
        ctr++;
        for(ct=1;ct<=flen;ct++){
            dig=(num/pow)%10;
            dig1=(find/pow)%10;
            printf("%d %d",dig,dig1);
            pow/=10;
        }
    }
}

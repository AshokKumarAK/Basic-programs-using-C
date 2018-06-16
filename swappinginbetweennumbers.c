#include <stdio.h>
#include <conio.h>
void main(){
    int num=12345,pow,len=0,dig,ctr,flag,old,temres,count;
    pow=1;
    while(num/pow){
        len++;
        pow*=10;
    }
    for(ctr=1,pow=1;ctr<len;ctr++)
        pow*=10;
    flag=0;
    temres=0;
    if (len%2==0){
        count=0;
        while(count!=len){
            count++;
            dig=(num/pow)%10;
            flag++;
            if(flag==1){
                old=dig;
            }
            else if(flag==2){
                flag=0;
                temres*=100;
                temres+=dig*10+old;
            }
            pow/=10;
        }
        printf("%d ",temres);
    }
    else{
        count=0;
        while(count!=len-1){
            count++;
            dig=(num/pow)%10;
            flag++;
            if(flag==1){
                old=dig;
            }
            else if(flag==2){
                flag=0;
                temres*=100;
                temres+=dig*10+old;
            }
            pow/=10;
        }
        printf("%d ",temres*10+num%10);
    }
}

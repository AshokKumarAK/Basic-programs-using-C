#include<stdio.h>
int fac(int num){
    int fact=1;
    for(int ctr=2;ctr<=num;ctr++)
        fact*=ctr;
    return fact;
}
int main() {
   int num,power,sum,digit;
   for(num=1;num<=100000;num++){
        power=1;
        sum=0;
        while(num/power){
           digit=(num/power)%10;
           sum+=fac(digit);
           power*=10;
        }
       if(sum==num){
           printf("%d ",num);
       }
   }
}
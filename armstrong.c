#include<stdio.h>

int main() {
   int power=1,count=0,sum,digit,pro,ctr;
   for(int num=1;num<=100000;num++){
        while(num/power){
       count++;
       power*=10;
   }
   power=1;
   sum=0;
   while(num/power){
        digit=(num/power)%10;
        for(ctr=1,pro=1;ctr<=count;ctr++)
            pro*=digit;
        sum+=pro;
        power*=10;
   }
   if(sum==num){
       printf("%d ",num);
   }
   }
}
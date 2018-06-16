#include<stdio.h>

int main() {
   int num,power=1,pro,sum,f1,f2,f3;
   for(num=1;num<=10000;num++)
   {
        pro=1;
   sum=0;
   f1=num%10;
   f2=(num/10)%10;
   f3=num/100;
   if (f1==f2 || f1==f3 || f2==f3){
       continue;
   }
   else{
       sum=f1+f2+f3;
       pro=f1*f2*f3;
       if(sum*pro==num)
           printf("%d ",num);
   }   
   }
}

#include<stdio.h>
int reverse(int number){
    int power=1,digit,rev=0;
    while(number/power!=0){
       digit=(number/power)%10;
       rev=(rev*10)+digit;
       power*=10;
   }
   return rev;
}
int main() {
   int num=24,rev,sqrev,sqnum,revsqnum;
   rev=reverse(num);
   sqrev=rev*rev;
   //printf("%d",sqrev);
   sqnum=num*num;
   revsqnum=reverse(sqnum);
   if (revsqnum==sqrev){
       printf("ADAM");
   }
   else{
       printf("NOT A Adam num");
   }
}
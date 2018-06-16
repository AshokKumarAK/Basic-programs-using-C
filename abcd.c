#include<stdio.h>

int main() {
    //ABCD * E = DBCD;
   int num,mul,f1,f2,f3,f4,pro,pow,dig,rev;
   for(num=1234;num<=9876;num++){
        f1=num%10;
        f2=(num/10)%10;
        f3=(num/100)%10;
        f4=num/1000;
		for(mul=1;mul<=1000;mul++){
			pro=num*mul;
			if (f1==f2 || f1==f3 || f1==f4 || f2==f3 || f2==f4 || f3==f4 || f1== mul || f2==mul || f3==mul || f4==mul){
				continue;
			}
			else{
			  pow=1;
			  rev=0;
			  while(num/pow){
				  dig=(num/pow)%10;
				  rev= rev*10+dig;
				  pow*=10;
			  }
			  if(pro==rev){
				  printf("%d %d",num,mul);
			  }
			}
		}
   }
}

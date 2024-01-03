#include <stdio.h>
#include <conio.h>

void main(){
   int i,count=0,n;
   printf("Enter the number\n");
   scanf("%d",&n);
   while(n>0){
      n=n/10;
      count++;
   }
   printf("the digit is %d",count);
}

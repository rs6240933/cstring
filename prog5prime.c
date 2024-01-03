#include <stdio.h>
#include<conio.h>


void main(){
int n,i;
             //logic = prime number is only divisible by 1 and itself
printf("Enter the number \n");
scanf("%d",&n);
for(i=2; i<n; i++){
    if(n%i==0) // means when n is divisile by any no. btw 2 to n it is not prime
        break;
}
if(i==n) // means when i or lopp runs to n-1 the i becomes n which means it didnt found any no. btew 2 to n-1 which divides n
{
    printf("The number %d is prime",n);
}else{
   printf("The number %d is not prime",n);
}
}

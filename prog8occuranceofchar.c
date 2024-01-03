//prog to find tha occurance of charcater inserted by user
#include <stdio.h>
#include <conio.h>

void main(){
int i,cound=0;
char s[50],j;
printf("Enter the string \n");
gets(s);
printf("enter the character whose frequency you want to find \n");
scanf("%c",&j);
for(i=0; s[i]!='\0'; i++){
   if(s[i]==j){
      cound++;
   }
 }
 printf("the character %c occurs %d",j,cound);
}

#include <stdio.h>
#include <conio.h>

void main(){

char s[50];
int i;
printf("Enter the string \n");
gets(s);
i = strlen(s); //this fun accept the first block array in which string is store . passing array name = passing block address
printf("The Length is %d",i);

}

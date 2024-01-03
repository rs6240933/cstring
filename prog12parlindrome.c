#include<stdio.h>
#include <conio.h>

void main(){

char s[50], a[50],z;
int i,j,k;
printf("Enter string \n");
gets(s);
strcpy(a,s);
strrev(a);
if(strcmp(a,s)==0){  //use to compare two string
    printf("string is palindrome");
}else{
     printf("string is not palindrome");
}
}

#include <stdio.h>
#include<conio.h>


void main(){

//char s[50]= {'A', 'B', 'C', 'D', 'E', 'F', '\0'}; //null character
//int i;
//for(i=0; s[i]!='\0'; i++){
    //printf("%c",s[i]);
//}
//puts(s);
char s[50]; int i;
printf("Enter the string \n");
gets(s);
puts(&s[0]);
puts(s);
}

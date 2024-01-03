
#include<stdio.h>
#include<conio.h>


void main(){

char s[50], ch;
int i,l;
printf("Enter the string \n");
gets(s);
for(l=0; s[l]!='\0'; l++); //use to find length of array
printf("%d",l);
for(i=0; i<=l/2; i++){
    ch = s[i];
    s[i]=s[l-1-i];
    s[l-1-i]=ch;
}
printf("the reverse string is %s",s);

}
// comp
// 0123  l=3
//ch=c s[i]=l-1-i = 3-1-0

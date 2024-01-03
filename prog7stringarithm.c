#include <stdio.h>
#include <conio.h>

void main(){
char s[50];
int A=0,B=0,i;
printf("Enter the string \n");
gets(s);
for(i=0; s[i]!='\0'; i++){
    if(s[i]>='A' && s[i]<='Z' || s[i]>='a'&& s[i]<='z'){
        A=1;
    }
    if(s[i]>='0' && s[i]<='9'){
        B=1;
    }
}
if(A==B){
    printf("the string is  alphanumeric");
}else{
    printf("the string is not  alphanumeric");
}
}

#include <stdio.h>
#include<conio.h>


void main(){

char s[50];
int i,j,k;
printf("Enter the string \n");
gets(s);
for(i=0; i<strlen(s); i++){
    for(j=i+1; j<strlen(s);){
        if(s[i]==s[j]){
            for(k=j; k<strlen(s);k++){
                s[k]=s[k+1];
            }
        }else{
          j++;
        }
    }
}
printf("%s",s);
return 0;
}

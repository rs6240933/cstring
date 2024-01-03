//prog to find tha occurance of all character
#include <stdio.h>
#include <conio.h>

void main(){
char s[50],z;
int k,i,j;
printf("enter the string \n");
gets(s);

for(i=0; s[i]!='\0'; i++){
    k=1; //because every charcter must be present one time
    for(j=i+1; s[j]!='\0'; j++){
        if(s[i]==s[j]){
            k++;
            s[j]='`'; //to remove repetition
        }
    }
    //if(k>1) //writing this will print the repeated string with count
    if(s[i]!='`')
    printf("\n %c appeared %d times",s[i],k);

}

}

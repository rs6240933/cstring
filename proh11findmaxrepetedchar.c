#include <stdio.h>
#include <conio.h>

void main(){
char s[50],z;
int maxcount = 0;
int k,i,j;
printf("enter the string \n");
gets(s);

for(i=0; s[i]!='\0'; i++){
    k=1;
    for(j=i+1; s[j]!='\0'; j++){
        if(s[i]==s[j]){
            k++;
            s[j]='`';
        }
    }
    if(maxcount < k){
        maxcount = k;
        z = s[i];
    }


}
if(s[i]!='`')
    printf("\n %c appeared %d times",z,maxcount);
}


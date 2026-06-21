//reverse a string

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,i;
    printf("the number of strings you want:");
    scanf("%d",&n);

    getchar();//consume newline

    char str[n+1];
    fgets(str,sizeof(str),stdin);

   str[strcspn(str,"\n")]='\0'; 

    char temp;
    char *start=str;
    char *end=str+strlen(str)-1;
    while(start<end){
       temp=*start;
       *start=*end;
       *end=temp;


       start++;
       end--;
    }
    printf("%s",str);
    
}

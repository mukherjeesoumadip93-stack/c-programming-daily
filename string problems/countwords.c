#include<stdio.h>
#include<string.h> 
#include<ctype.h>                


int main(){
    char string[50];
    fgets(string,sizeof(string),stdin);
    
    string[strcspn(string,"\n")]='\0';

    int count=0,i,word=0;

   char *str=string;
    while(*str){
        if(isspace(*str)){
            word=0;
        }
        else if(!word){
            word=1;
            count++;
        }
        str++;
        
    }
    printf("total words available are:%d",count);
    return 0;
}

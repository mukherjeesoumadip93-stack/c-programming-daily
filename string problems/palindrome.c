





//check palindromic string or not

#include<stdio.h>
#include<string.h> 
#include<ctype.h>                


int main(){
    //string initialization
char str[50];   

fgets(str,sizeof(str),stdin);

  //newline replaced by null character
str[strcspn(str,"\n")]='\0';
  //two pointer approach
char *start=str;
char *end=str+strlen(str)-1;
//variable for checking

int check=1;
//loop logic


while(start<end){
    if(*start!=*end){
    check=0;
    break;
    }
    start++;
    end--;
    
}
if(check){
        printf("it is a palindromic string");

    }
    else{
        printf("not palindromic");
    }
return 0;

}
//end

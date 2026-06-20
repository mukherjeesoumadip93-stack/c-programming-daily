/*
Program: counting vowels,consonants,spaces,digits in a string
Concepts: Strings, Loops
Difficulty: Beginner
Author: Soumadip Mukherjee
*/




#include<stdio.h>
#include<ctype.h>

int main(){
  //taking input
    char string[50];
    fgets(string,sizeof(string),stdin);

    char demo;

    int vowels=0,consonants=0,digits=0,spaces=0,i;
            //loop for counting
    for(i=0;string[i]!='\0';i++){ 
            //if nothing is entered by user then 
        if(string[0]=='\n'){
            printf("nothing has entered\n");
        }
        demo=tolower(string[i]);
           //vowels counting logic inside of a string
        if(demo=='a'||demo=='e'||demo=='i'||demo=='o'||demo=='u'){
            vowels++;
        }
          //counting logic for consonants using built in function isalpha
        else if(isalpha(demo)){
            consonants++;
        }
          //counting logic for digis in a string
        else if(isdigit(demo)){
            digits++;
        }
          //counting logic for spaces
        else if(demo==' '){
            spaces++;
        }
       
            
        

    }
    printf("vowels....:%d\n",vowels);
    printf("consonants...:%d\n",consonants);
    printf("digits...:%d\n",digits);
    printf("spaces....:%d\n",spaces);
    return 0;
}
//end 




    

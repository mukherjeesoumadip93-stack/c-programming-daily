/*
Program: soting of strings
Concepts: Strings, Loops
Difficulty: Beginner
Author: Soumadip Mukherjee
*/

#include<stdio.h>
#include<string.h>

int main (){          //sorting the names of students in class
char stu[][20]={
    "soumo",
    "bag",
    "sreejoyee",
    "nafis"
    
};
int i,j;
char temp[50];
for(i=0;i<3;i++){
    for(j=1;j<4;j++){
       if (strcmp(stu[i],stu[j])>0)
        {
        strcpy(temp,stu[i]);
        strcpy(stu[i],stu[j]);
        strcpy(stu[j],temp);
       }                           //strcmp-for comparison,//strcpy-for string copy
    }
}
printf("sorted names:\n");

for(int i=0;i<4;i++){
    printf("%s\n",stu[i]);
}
}

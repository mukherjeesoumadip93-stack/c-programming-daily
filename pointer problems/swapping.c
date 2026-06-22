/*
Program: swapping using call by address
Concepts: Strings, Loops
Difficulty: Beginner
Author: Soumadip Mukherjee
*/


#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swapping in function:%d %d\n",*a,*b);
}

int main(){
    int x=10;
    int y=12;
    
    swap(&x,&y);               //call by  address

    printf("the values after swapping in main:%d %d",x,y);
}

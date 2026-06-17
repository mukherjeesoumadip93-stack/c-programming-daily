#include<stdio.h>

int main(){
    int matrix[5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {79,80,79,89,98},
        {76,87,95,03,67}
    };
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                printf(" %d ",matrix[i][j]);        //diagonal matrix logic
            }else{
                matrix[i][j]=0;
                printf(" %d ",matrix[i][j]);
            }
            
        }
        printf("\n");
    }
    return 0;

}
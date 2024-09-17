#include<stdio.h>

int main(){


    int n;

    printf("Enter the no.\n");
    scanf("%d",&n);


    printf("The no. of n is %d \n",n);

    int i=2;

    while(i <=n){

        
        if(i % 2 !=0){

            printf("%d \n",i);


        } 

        i++;

    }
    

    return 0;
}
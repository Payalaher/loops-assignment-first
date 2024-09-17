#include<stdio.h>

int main(){


    int n;

    printf("Enter the no.\n");
    scanf("%d",&n);


    printf("The no. of n is %d \n",n);

    int i=n;

    while(i>=1){

        printf("%d \n",i);

        i--;

    }
    

    return 0;
}
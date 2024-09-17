#include<stdio.h>

int main(){

int num ;
printf("Enter the number \n");
scanf("%d",&num);

int oddsum = 0;

for(int i = 1; i <= num ; i++){
    if(i % 2 != 0){
        oddsum = oddsum + i;
    }
}
printf("The Sum of odd no.s is %d \n",oddsum);

    return 0;
}
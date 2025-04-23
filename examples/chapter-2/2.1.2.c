#include<stdio.h>
int main ( ) {

    printf("Enter a number\n");
    float num;
    scanf("%f",&num);
    int choice;
    printf("Enter 1 for metter to feet & 2 for feet to metter\n");
    scanf("%d",&choice);

    if(choice==1){
        printf("%f",num*3.33);
    }
    if(choice==2){
        printf("%f",num/3.33);
    }

    return 0;

}
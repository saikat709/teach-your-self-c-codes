#include<stdio.h>
int main ( ) {

    int choice;
    printf("Enter 1 for metter to feet & 2 for feet to metter\n");
    scanf("%d",&choice);

    if(choice==1){
        printf("Enter a number of metter\n");
        float num;
        scanf("%f",&num);
        printf(" Feet :%f\n",num*3.33);
    }
    if(choice==2){
        printf("Enter a number of feet\n");
        float num;
        scanf("%f",&num);
        printf(" Metter :%f\n",num/3.33);
    }

    return 0;

}
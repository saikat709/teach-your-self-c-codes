#include<stdio.h>
int main ( ) {
    int num1,num2;
    printf("Enter first  number\n");
    scanf("%d",&num1);
    printf("Enter second  number\n");
    scanf("%d",&num2);
    
    int choice;
    printf("Enter 1 for add & 2 for multiplication\n");
    scanf("%d",&choice);
    if(choice==1){
        printf("Answer is: %d\n",num1+num2);
    }
    else if(choice==2){
        printf("Answer is: %d\n",num1*num2);
    }
    else{
        printf("Invalide \n");
    }
    


    return 0;
}
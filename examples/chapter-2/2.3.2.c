#include<stdio.h>
int main ( ) {

    int answer;
    printf("What is 18 + 27");
    scanf("%d",&answer);
    if(answer==45){
        printf("Your Answer is Right");
    }
    else { // answer != right
        printf("Sorry, You're Wrong \n");
        printf("Right Answer is 45\n");

    }
    return 0;

}
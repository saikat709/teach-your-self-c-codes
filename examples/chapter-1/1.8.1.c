#include <stdio.h>

int get_sqr(void);

int main(void){
    int sqr;

    sqr = get_sqr();
    printf("Square: %d", sqr);

    return 0;
}

int get_sqr(void){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    return num*num; /* square the numbers */
}
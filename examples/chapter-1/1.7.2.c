/** This program has three functions. */

#include <stdio.h>

void funcl(void); /* prototypes */
void func2(void);


int main(void){
    func2();
    printf("3");

    return 0;
}

void func2 (void){
    func1();
    printf("2 ");
}

void funcl(void){
    printf("1. ");
}